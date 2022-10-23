#include "main.h"

/**
 * _strncat - concatinates string with specified number
 * @dest: string to be concatinated on
 * @src: string to be concatinated
 * @n: an integer
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int count = 0;
	int i = 0;
	int j = 0;

	while (dest[count] != '\0')
	{
		count++;
	}
	while (src[j] != src[n])
	{
		dest[count + i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
