#include "main.h"

/**
 * _strlen - function to return length of argument
 * @s: char recieved as argument
 * Return: return char length
 */

int _strlen(char *s)
{
	int len, i = 0;

	for (len = 0; s[len] != '\0'; len++)
	{
		i++;
	}

	return (i);
}
