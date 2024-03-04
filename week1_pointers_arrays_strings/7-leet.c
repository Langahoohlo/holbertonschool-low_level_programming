#include "main.h"

/**
 * leet - function for leet
 * @s: argument to change
 * Return: always s
 */

char *leet(char *s)
{
	char find[] = "aAeEoOtTlL";
	char mv[] = "4433007711";
	int i, x;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (x = 0; find[x] != '\0'; x++)
		{
			if (find[x] == s[i])
			{
				s[i] = mv[x];
				break;
			}
		}
	}
	return (s);
}
