#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function to conacantes two strings
 * @s1: argument
 * @s2: argument
 * Return: result or 0
 */

char *str_concat(char *s1, char *s2)
{
	int length1 = 0, length2 = 0, total;

	char *result;

	if (s1 != NULL)
	{
		for (length1 = 0; s1[length1]; length1++)
			;
	}

	if (s2 != NULL)
	{
		for (length2 = 0; s2[length2]; length2++)
			;
	}

	result = malloc(sizeof(char) * (length1 + length2 + 1));

	if (result == NULL)
		return (NULL);

	total = 0;

	while (total < (length1 + length2))
	{
		if (total < length1)
			result[total] = s1[total];
		else
			result[total] = s2[total - length1];
		total++;
	}
	result[total] = 0;
	return (result);
}
