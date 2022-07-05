#include "main.h"
#include <unistd.h>
/**
 * _putchar - Prints the whole alphabet and new line
 *@c: char
 * Return: 0
 */
void _putchar(char c)
{
	return (write(1, &c, 1));
}
