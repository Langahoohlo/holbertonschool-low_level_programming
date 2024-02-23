#include "main.h"

/**
 * print_last_digit - prints the last digit of n
 * @n: recieved argument
 * Return: lastdigit
 */

int print_last_digit(int n)
{
	int lastdigit = n % 10;

	if (n < 0)
	{
		lastdigit = lastdigit * -1;
	}
	_putchar(lastdigit + '0');
	return (lastdigit);
}
