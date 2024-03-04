#include "main.h"

/**
 * string_toupper - function to convert string
 * @s: argument recieved
 * Return : will return s
 */

char *string_toupper(char *s)
{
	int i = 0;

	for (; s[i] != '\0' && s[i] <= 'z'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] -= 32;
		}
	}
	return (s);
}
