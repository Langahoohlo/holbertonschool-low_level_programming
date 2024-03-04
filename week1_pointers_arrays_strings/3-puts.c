#include "main.h"

/**
 * _puts - function to recieve arument
 * @str: argument to print
 */

void _puts(char *str)
{
	int n = 0;

	for ( ; str[n] != '\0'; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
