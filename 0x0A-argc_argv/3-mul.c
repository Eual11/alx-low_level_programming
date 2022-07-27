#include <stdio.h>
#include <stdlib.h>

/**
 * main - arguments passed to our program
 * @argc: arguments count
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int num1 = atoi(argv[1]);

		int num2 = atoi(argv[2]);

		int mult = num1 * num2;

		printf("%d\n", mult);

		return (0);
	}

	else
	{
		printf("Error\n");
		return (1);
	}
}
