#include "main.h"
#include <unistd.h>
/**
 * main - shit.
 * Return: 0
*/

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
		_putchar(c);
	_putchar('\n');
}
