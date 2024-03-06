#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function to print square matrix
 * @a: argument recieved
 * @size: argument recieved
 */

void print_diagsums(int *a, int size)
{
	int sum1, sum2, i;

	for (i = 0; i < size * size; i += size + 1)
	{
		sum1 += a[i];
	}

	for (i = size - 1; i < (size * size) - 1; i += size - 1)
	{
		sum2 += a[i];
	}

	printf("%d, %d\n", sum1, sum2);
}