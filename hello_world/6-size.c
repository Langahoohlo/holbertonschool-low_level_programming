#include <stdio.h>

/**
 * main - will enter into program that prints various types of sizein c.
 *
 * Return: Will always be 0
 */

int main(void)
{
	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	printf("Size of an int: %lu byte(s)\n", sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %lu byte(s)\n", sizeof(float));

	return (0);
}
