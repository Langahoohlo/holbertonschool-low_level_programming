#include "main.h"
#include "stdio.h"

/**
 * _strchr - function to search for first occurance of character
 * @s: pointer to return if first occurance
 * @c: character recieved as argument
 * Return: Pointer if first occurance else null
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	if (c == '\0')
		return (s + i);

	return (NULL);
}
