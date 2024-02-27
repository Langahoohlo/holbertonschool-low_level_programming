#include "main.h"

void _puts(char *str)
{
	int n;

	for (n = 0; n != str['\0']; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
