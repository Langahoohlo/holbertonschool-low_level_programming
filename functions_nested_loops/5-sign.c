#include "main.h"

/**
 * print_sign - checks for positves, negatives and 0
 * @n: parameter to check
 * Return: number based on positives, negatives or 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('-');
		return (0);
	}
}
