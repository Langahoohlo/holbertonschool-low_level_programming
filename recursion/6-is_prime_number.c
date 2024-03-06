#include "main.h"

/**
 * is_prime_number - function to find prime number
 * @n: argument to check number
 * Return: Prime number
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime_number(n, n - 1));
}

/**
 * prime_number - function to return prime number
 * @n: argument to check
 * @i: argument recieved
 * Return: prime number in in_prime_number
 */

int prime_number(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}

	if (n % i == 0)
	{
		return (0);
	}

	return (prime_number(n, i - 1));
}
