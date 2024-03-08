#include "main.h"
#include "stdio.h"

/**
 * _strstr - function to find argument
 * @haystack: argument recieved
 * @needle: argument to look for
 * Return: haystack
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
