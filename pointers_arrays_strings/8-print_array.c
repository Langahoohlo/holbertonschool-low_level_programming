#include "main.h"
#include <stdio.h>

/**
 *
 *
 */

void print_array(int *a, int n)
{
	int i;

	n = sizeof(a) / sizeof(a[i]);	

	for (i = 0; i < n; i++)
	{
		printf("%d, ", n[i]);
	}
	_putchar('\n');
}
