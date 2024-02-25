#include "main.h"

void jack_bauer(void)
{
	int hrs = 0, mins = 0;

	while (hrs < 24)
	{
		if (mins < 60)
		{
			_putchar('0' + (hrs / 10));
			_putchar('0' + (hrs % 10));
			_putchar(':');
			_putchar('0' + (mins / 10));
			_putchar('0' + (mins % 10));
			_putchar('\n');
			mins++;
		}
		else
		{
			mins = 0;
			hrs++;
		}
	}
}
