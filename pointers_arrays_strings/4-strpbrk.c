#include "main.h"
#include "stdio.h"

/**
 * _strpbrk -function to seach for a string
 * @s: argument recieved
 * @accept:argument recieved
 * Return: return s + j else null
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + j);
			}
		}
	}
	return (NULL);
}
