#include "main.h"
#include <stdio.h>

int _sqrt_recursion(int n)
{
	int sqrt;

	if (n < 0)
		return (-1);

	else if (n <= 1)
		return (n);

	if (n % 2 == 0)
	{
		sqrt = _sqrt_recursion(n / 2);

		if (n / sqrt == sqrt)
		{
			return (sqrt);
		}
		else if (sqrt > 1)
		{
			return (sqrt * 2);
		}
		return (-1);
	}
	else
	{
		return (sqrt_odd(n, n - 2));
	}
}

int sqrt_odd(int check, int n)
{
	if (n < 0)
	{
		return (-1);
	}

	else if (check == n * n)
	{
		return (n);
	}

	else
	{
		return (sqrt_odd(check, n - 2));
	}

}
