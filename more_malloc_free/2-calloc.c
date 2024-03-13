#include "main.h"
#include <stdlib.h>

/**
 * _bzero - function
 * @dst: argumnet used
 * @size: argument used
 * Return: dst
 */

void *_bzero(void *dst, unsigned int size)
{
	char *destination = dst;

	do
		* destination++ = 0;
	while (--size != 0);

	return (dst);
}

/**
 * _calloc - function
 * @nmemb: argument receieved
 * @size: argument
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *pointer;

	if (!nmemb || !size)
		return (NULL);

	pointer = malloc(nmemb * size);

	if (!pointer)
		return (NULL);

	_bzero(pointer, nmemb * size);

	return (pointer);
}
