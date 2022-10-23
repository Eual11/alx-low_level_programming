#include "main.h"

/**
 * _strlen - counts length of the string
 * @s: accepted string
 *
 * Return: returns length of string
 */

int _strlen(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		count++;
	}
	return (count);
}
