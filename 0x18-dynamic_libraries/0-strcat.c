#include "main.h"

/**
 * _strcat - concatenates string
 * @dest: string to be concatenated upon
 * @src: string to be concatenated
 *
 * Return: pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int count = 0;
	int i = 0;
	int j = 0;

	while (dest[count] != '\0')
	{
		count++;
	}
	while (src[j] != '\0')
	{
		dest[count + i] = src[j];
		j++;
		i++;
	}
	return (dest);
}
