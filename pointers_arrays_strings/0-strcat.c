#include "main.h"

/**
 * _strcat - function to add argument to another argument
 * @dest: argument recieved
 * @src: argument received
 * Return: return dest
 */

char *_strcat(char *dest, char *src)
{
	int len, i;

	for (len = 0; dest[len] != '\0'; len++)
		;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[len] = src[i];
	}

	dest[length] = '\0';

	return (dest);
}