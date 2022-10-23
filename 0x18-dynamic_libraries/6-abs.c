#include "main.h"

/**
 *_abs - checkes lower case
 *@n: number in the abs
 * Return: return 0, n or -1*n
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (-1 * n);
	}
	else if (n > 0)
	{
		return (n);
	}
	else
	{
		return (0);
	}
}
