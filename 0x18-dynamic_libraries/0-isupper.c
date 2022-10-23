#include "main.h"

/**
 * _isupper - tells if the letter is upper
 *@c: accepts character
 *
 * Return: 1 if it upper and 0 if it is not
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
