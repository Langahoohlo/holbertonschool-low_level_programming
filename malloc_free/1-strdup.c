#include "main.h"
#include <stdlib.h>

/**
 * _strdup - entry point
 * @str: argument from function
 * Return: s or o
 */

char *_strdup(char *str)
{
	int i = 0;
	char *s;

	if (str == 0)
	{
		return (0);
	}

	while (str[i] != '\0')
	{
		i++;
	}

	s = malloc(sizeof(char) * (i +  1));

	if (s == 0)
	{
		return (0);
	}

	while (i--)
	{
		s[i] = str[i];
	}

	return (s);
}
