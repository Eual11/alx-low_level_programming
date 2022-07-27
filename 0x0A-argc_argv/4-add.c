#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - prints the sum of non-negative numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int sum = 0;

	int i = 1;

	for (; i < argc; ++i)
	{
		if (!(atoi(argv[i])))
		{
			int j = 0;

			for (; argv[i][j] != '\0'; )
			{
				if (argv[i][j] > 57)
			{
					printf("Error\n");
					return (1);
			}
		}
		}

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
