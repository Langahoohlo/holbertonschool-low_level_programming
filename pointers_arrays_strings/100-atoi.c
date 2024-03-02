#include "main.h"

/**
 * _atoi - String to integer
 * @s: received argument to convert to integer
 *
 * Return: Value of converted string
 */

int _atoi(char *s)
{
	int i = 1;
	unsigned int num = 0;

	for (i = 1; *s != '\0'; s++)
	{
		if (*s == '-')
			i *= -1;
		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');
		else if (num > 0)
			break;
	}
	return (num * i);
}
