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
int main(void)
{
	print_alphabet();

	return (0);
}
