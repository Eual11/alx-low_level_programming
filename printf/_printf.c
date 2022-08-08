#include "main.h"
#include <stdlib.h>

void clean(va_list args, buffer_t *output);
int run_printf(const char *format, va_list args, buffer_t *output);
int _printf(const char *format, ...);

/**
 * clean - cleans the buffer for the action of printf
 * @args: A list of of arguments given to _printf.
 * @output: A buffer_t struct.
 */

void clean(va_list args, buffer_t *output)
{
    va_end(args);
    write(1, output->start, output->len);
    free_buffer(output);
}
/**
 * run_printf - Reads the format string.
 * @format: Character string to print may contain flags and directives.
 * @output: A buffer_t struct containing a buffer.
 * @args: A va_list of arguments.
 *
 * Return: The number of characters stored to output.
 */

int run_printf(const char *format, va_list args, buffer_t *output)
{
	int i, nWid, prec, ret = 0;
	char cTmp;
	unsigned char flags, len;
	unsigned int (*f)(va_list, buffer_t *,
			unsigned char, int, int, unsigned char);

	for (i = 0; *(format + i); i++)
	{
		len = 0;
		if (*(format + i) == '%')
		{
			cTmp = 0;
			flags = handle_flags(format + i + 1, &cTmp);
			nWid = handle_width(args, format + i + cTmp + 1, &cTmp);
			prec = handle_precision(args, format + i + cTmp + 1,
					&cTmp);
			len = handle_length(format + i + cTmp + 1, &cTmp);

			f = handle_specifiers(format + i + cTmp + 1);
			if (f != NULL)
			{
				i += cTmp + 1;
				ret += f(args, output, flags, nWid, prec, len);
				continue;
			}
			else if (*(format + i + cTmp + 1) == '\0')
			{
				ret = -1;
				break;
			}
		}
		ret += _memcpy(output, (format + i), 1);
		i += (len != 0) ? 1 : 0;
	}
	clean(args, output);
	return (ret);

}

/**
 * _printf - an implementaion of the std printf Ootputs a formatted string.
 * @format: Character string to print - may contain directives.
 *
 * Return: The number of characters printed.
 */

int _printf(const char *format, ...)
{
	buffer_t *output;
	va_list args;
	int ret;

	if (format == NULL)
		return (-1);
	output = init_buffer();
	if (output == NULL)
		return (-1);

	va_start(args, format);

	ret = run_printf(format, args, output);

	return (ret);
}
