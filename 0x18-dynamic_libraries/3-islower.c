#include "main.h"

/**
 *_islower - checkes lower case
 *@c: tested letter
 * Return: return 0 or 1
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
