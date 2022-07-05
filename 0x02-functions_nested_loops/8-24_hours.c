#include "main.h"
/**
 * jack_bauer - prints days
 *
 * Return: 0
 */
void jack_bauer(void)
{
	int i, j, k, l;

	int max = 9;

	while (l <= 2)
	{
		if (l == 2)
			max = 3;

		for (k = 0; k <= max; ++k)
		{
			for (j = 0; j <= 5; ++j)
			{
				for (i = 0; i <= 9; ++i)
				{
					_putchar(l + '0');
					_putchar(k + '0');
					_putchar(':');
					_putchar(j + '0');
					_putchar(i + '0');
					_putchar('\n');
				}
			}
		}
		l += 1;
	}
}
