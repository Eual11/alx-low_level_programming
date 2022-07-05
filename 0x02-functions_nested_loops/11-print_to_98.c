#include <stdio.h>
#include "main.h"

/**
 *  print_to_98 - prints numbers until 98
 *
 *  @n: given num
 * Return: n
 */
void print_to_98(int n);
{
	for (; n <= 98; ++n)
	{
		if (n != 98)
			printf("%d, ", n);
		else
		{
			 printf("%d \n", n);
		}
}
}

