#include "main.h"

/**
 * _puts - prints string
 * @str: input str * Return: no return
 * Return: null
 */

void _puts(char *str)
{
	for (int i = 0; i != '\0'; ++i)
	{
		_putchar(str[i]);
	}
}
