#include "main.h"

/**
 * _strcpy - function to to copy argument to another argument
 * @dest: argument recieved
 * @src: argument received
 * Return: return dest
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	for (; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	return (s1[i] - s2[i]);
}
