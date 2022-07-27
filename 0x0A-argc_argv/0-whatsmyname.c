#include <stdio.h>

/**
 * main - prints the name of the program
 * @argc: arguments count
 * @argv: an array of command line argument
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);
	return (0);
}
