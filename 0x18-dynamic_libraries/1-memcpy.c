#include "main.h"

/**
 * _memcpy - copy
 * @dest: parameter one
 * @src: parameter two
 * @n: size
 * Return: *dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
