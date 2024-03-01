#include "main.h"

/**
 * reverse_array - function to to copy argument to another argument
 * @a: argument recieved
 * @n: argument received
 */

void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i <= n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tmp;
	}
}
