#include "main.h"

/**
 * _isdigit - tells if it is digit or not
 *@c: accepts numbers
 *
 * Return: 1 if it is digit and 0 if it is not
 */

int _isdigit(int c)
{
	if (c >= 48 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
