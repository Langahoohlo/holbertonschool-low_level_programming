#include "main.h"

/**
 * _memset - function to fill memory with constant bytes
 * @b: constant byte
 * @n: bytes
 * @s: pointer
 * Return: always s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[9] = b;
	}
	return (s);
}
