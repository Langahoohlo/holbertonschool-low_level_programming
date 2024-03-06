#include "main.h"

/**
 * _print_rev_recursion - function to print argument in reverse
 * @s: argument to be printed in reverse
 * Return: NOthing
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_putchar(*s);
       _print_rev_recursion((s + 1));
}
