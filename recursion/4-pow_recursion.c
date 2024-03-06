#include "main.h"

/**
 * _pow_recursion - function to return power of argument x
 * @x: argument used to find power of
 * @y: argument used to for x
 * Return: power of x else 0 or 1
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
