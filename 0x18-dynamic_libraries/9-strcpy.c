#include "main.h"

/**
 * _strcpy - returns copy of an object
 * @dest: variable to be copied into
 * @src: variable to be copied
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (src[count] != '\0')
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';
	return (dest);
}
