#include "main.h"

/**
 * print_line - function to print lines
 * @n: argument received to print number of those lines
 */

void print_line(int n)
{
	int i = 0;

	for (i = 0; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
