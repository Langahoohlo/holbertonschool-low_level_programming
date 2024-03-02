#include "main.h"

/**
 * _atoi - String to integer
 * @s: received argument to convert to integer
 *
 * Return: Value of converted string
 */

int _atoi(char *s)
{
	int i = 0;
	int n = 0;

	for (i = 0; *s != '\0'; i++)
	{
		if (*s == '-')
			i *= -1;
		else if (*s >= '0' && *s <= '9')
			n = (n * 10) + (*s - '0');
		else if (n > 0)
			break;
	}
	return (i * n);
}
