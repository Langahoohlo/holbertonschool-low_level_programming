#include "main.h"

/**
 * _islower - check for lower case
 * @c : is an argument recievd to check if islower
 * Return : code exit
 */

int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
