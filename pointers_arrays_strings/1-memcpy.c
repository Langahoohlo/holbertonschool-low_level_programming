#include "main.h"

/**
 * _memcpy - function that copies n bytes from src to dest
 * @dest: destination to save bytes in
 * @src: bytres recieved as argument
 * @n: size of bytes
 * Return: always dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];

	}
	return (dest);
}
