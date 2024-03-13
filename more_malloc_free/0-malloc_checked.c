#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - function
 * @b: argument
 *
 * Return: pointer
 */

void *malloc_checked(unsigned int b)
{
	void *pointer;

	pointer = malloc(b);

	if (pointer == NULL)
	{
		free(pointer);
		exit(98);
	}

	return (pointer);
}
