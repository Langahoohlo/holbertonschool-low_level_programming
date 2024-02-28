#include "main.h"

/**
 * _puts - function to recieve arument
 * @str: argument to print
 */

void _puts(char *str)
{
	int n;

	for (n = 0; n != str['\0']; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
