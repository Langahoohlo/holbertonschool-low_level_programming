#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - This program will asign a random to a variable
 *
 * Return: will always be 0
 */

int main(void)
{
	int n, lastD;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	lastD = n % 10;

	{
		if (lastD > 5)
		{
			printf("Last digit of %d is %d and is greater than 5\n", n, lastD);
		}
		else if (lastD == 0)
		{
			printf("Last digit of %d is 0 and is 0\n", n);
		}
		else
		{
			printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastD);
		}
	}
	return (0);
}
