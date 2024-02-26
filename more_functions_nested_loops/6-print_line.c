#include "main.h"

/**
 * print_line - function to print lines
 * @n: argument received to print number of those lines
 */

void print_line(int n)
{
	int i = 0;
	if (n > 0)
	{
	for (i = 1; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
	}
	else
	{
	_putchar('\n');
	}
}
