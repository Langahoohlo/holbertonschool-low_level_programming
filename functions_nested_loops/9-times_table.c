#include "main.h"

/**
 * times_table - times table of nine
 * @void: will return nothing
 */

void times_table(void)
{
	int row, column;

	for (row = 0; row <= 9; row++)
		for (column = 0; column <= 9; column++)
		{
			int num = row * column;

			if (column != 0)
			{
				_putchar(',');
				_putchar(' ');
			}

			if (num <= 9)
			{
				_putchar('0' + num);
			}
			else
			{
				_putchar('0' + (num / 10));
				_putchar('0' + (num % 10));
			}
		}
	_putchar('\n');
}
