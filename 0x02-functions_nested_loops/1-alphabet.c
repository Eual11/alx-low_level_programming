#include "main.h"
#include <unistd.h>
/**
 * main - shit.
 * Return: 0
*/

/**
 * _putchar - ddd
 *
 *Return: 0 alwaus
*/


int _putchar(char c)
{
	return (write(1, &c, 1));
}
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
		_putchar(c);
	_putchar('\n');
}
int main(void)
{
	print_alphabet();

	return (0);
}
