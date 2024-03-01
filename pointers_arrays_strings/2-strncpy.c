#include "main.h"

/**
 * _strncpy - function to to copy argument to another argument
 * @dest: argument recieved
 * @src: argument received
 * @n: argument recieved
 * Return: return dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *tmp = dest;

	for (; n != 0 && *src != '\0'; n--, src++)
	{
		*tmp = *src;
		tmp++;
	}

	for (; n != 0 && *tmp != '\0'; n--, tmp++)
	{
		*tmp = '\0';
	}
	return (dest);
}
