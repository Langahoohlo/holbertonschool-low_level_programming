#include "main.h"

/**
 * _strcat - function to add argument to another argument
 * @dest: argument recieved
 * @src: argument received
 * Return: return dest
 */

char *_strcat(char *dest, char *src)
{
	char* start = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';

	return (start);
}
