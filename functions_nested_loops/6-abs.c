#include "main.h"

/**
* _abs - absolute of value of integer
* @n: receive argument as integer
* Return: value
*/

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}

	return (0);
}
