#include "main.h"

/**
* jack_bauer - function to print
* Description: prints all minutes of the day
*/

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
