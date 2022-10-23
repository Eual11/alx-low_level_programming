#include "main.h"

/**
* _strstr -  function finds the first occurrence of the substring
* @haystack: parameter one
* @needle: parameter two
* Return: 0
*/

char *_strstr(char *haystack, char *needle)
{
	char *i = haystack;
	char *j = needle;

	while (*haystack)
	{
		while (*needle)
		{
			if (*haystack++ != *needle++)
			{
				break;
			}
		}
		if (!*needle)
		{
			return (i);
		}
		needle = j;
		i++;
		haystack = i;
	}
	return (0);
}
