#include "main.h"

/**
 * factorial - function of a given number
 * @n: argument to return num of
 * Return: factorial of given argument
 */

int factorial(int n)
{
	if (n == 1 || n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
