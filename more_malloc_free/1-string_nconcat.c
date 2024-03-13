#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - entry point to functio
 * s1: argument
 * s2: argument
 * @n: argument
 * Return: memory allocation
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *string;
	unsigned int i, len_s1 = 0, len_s2 = 0;

	if (s1)
		for (; s1[len_s1]; len_s1++)
			;

	if (s2)
		for (; s2[len_s2]; len_s2++)
			;

	if (!(n >= len_s2))
		len_s2 = n;

	string = malloc(sizeof(char) * (len_s1 + len_s2));

	if (!string)
		return (NULL);

	for (i = 0; i < (len_s1 + len_s2); i++)
	{
		if (i < len_s1)
			string[i] = s1[i];
		else
			string[i] = s2[i - len_s1];
	}

	string[i] = '\0';

	return (string);
}
