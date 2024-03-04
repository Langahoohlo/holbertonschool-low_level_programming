#include "main.h"

/**
 * _strncat - function to to copy argument to another argument
 * @dest: argument recieved
 * @src: argument received
 * @n: argument recieved
 * Return: return dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len, i;

	for (len = 0; dest[len] != '\0'; len++)
		;

	if (n > 0)
	{
		for (i = 0; src[i] != '\0' && i < n; i++, len++)
		{
			dest[len] = src[i];
		}
		dest[len] = '\0';
	}
	return (dest);
}
