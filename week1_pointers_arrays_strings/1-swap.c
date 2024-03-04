#include "main.h"

/**
 * swap_int - starting point of function
 * @a: argument received
 * @b: argument recieved
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
