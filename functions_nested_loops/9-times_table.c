#include "main.h"

void times_table(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		int n = 9 * i;

		if (n < 10)
		{
			_putchar(n + '0');
		}
		else
		{
			_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
		}
		_putchar('\n');
	}
}
