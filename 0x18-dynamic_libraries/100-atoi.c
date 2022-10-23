#include "main.h"

/**
 * _atoi - changes to integer
 * @s: character to be changed
 *
 * Return: int
 */
int _atoi(char *s)
{
	int count;
	int i = 0;
	int j = -1;
	int x = 0;

	for (count = 0; s[count] != '\0'; count++)
	{
		if (s[count] == '-')
			j = j * -1;
		if (s[count] >= '0' && s[count] <= '9')
		{
			i = i * 10;
			i -= (s[count] - '0');
			x = 1;
		}
		else if (x == 1)
			break;
	}
	i = j * i;
	return (i);
}
