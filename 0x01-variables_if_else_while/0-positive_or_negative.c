/**
 *Auth:Eual G
 * /
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* 
 * main - the function prints out whethere a num is +ve or -ve
 * Return: 0
 * */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n>0)
		printf("%d is positive",n);
	else
		printf(%"d is negative",n);
	return (0);
}
