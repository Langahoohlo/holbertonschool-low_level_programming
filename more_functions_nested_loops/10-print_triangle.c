#include "main.h"

/**
 * print_triangle - function to print triangle
 * @size: integer received for function
 * Return: 0
 */

void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
	for (i = 0; i < size; i++)
	{
		int distance = size - i - 1;

		for (j = 0; j < size; j++)
		{
			if (distance > j)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}
	}
	else
	{
		_putchar('\n');
	}
}
