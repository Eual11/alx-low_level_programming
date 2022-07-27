#include <stdio.h>

/**
 * main - arguments passed to our program
 * @argc: arguments count
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i = 0;

	for (; i < argc; ++i)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

