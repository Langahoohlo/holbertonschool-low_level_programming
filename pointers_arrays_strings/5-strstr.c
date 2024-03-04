#include "main.h"
#include "stdio.h"

/*
 * _strstr -
 * @haystack:
 * @needle:
 * Return:
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		j = 0;

		while (needle[j] != '\0' && needle[j] == haystack[i + j])
		{
			j++;
		}

		if (needle[j] == '\0')
		{
			return (haystack + i);
		}
	}
	return (NULL);
}
