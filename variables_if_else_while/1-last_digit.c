#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * This program will asign a random to the variable n
 *
 * Return: will always be 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int lastDigit;

	lastDigit = n % 10;

	{
		if (lastDigit > 5)
		{
			printf("Last digit of %d is %d and is less than 6 and not 0", n, lastDigit);
		}
		else if (lastDigit == 0)
		{
			printf("Last digit of %d is 0 and is 0", n);
		}
		else
		{
			printf("Last digit of %d is %d and is greater than 5", n, lastDigit);
		}
	}
	return (0);
}
