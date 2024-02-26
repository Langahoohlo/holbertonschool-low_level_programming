#include "main.h"

/**
 * _isupper - function to check for uppercase
 * @c : is an argument recievd to check if isupper
 * Return : 1 for uppercase 0 for lowercase
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
