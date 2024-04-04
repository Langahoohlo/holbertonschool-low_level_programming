#include <stdlib.h>

/**
 * binary_to_uint - function to convert to binary
 * @b: number to convert
 * Return: i
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;

	if (!*b)
	{
		return (0);
	}

	while (*b != '\0')
	{
		i <<= 1;

		if (*b == '1')
		{
			i |= 1;
		}
		else if (*b != '0')
		{
			return (0);
		}
		b++;
	}
	return (i);
}
