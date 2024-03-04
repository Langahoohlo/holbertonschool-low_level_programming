#include "main.h"

/**
 * _strcpy - function to to copy argument to another argument
 * @dest: argument recieved
 * @src: argument received
 * Return: return dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for ( ; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
