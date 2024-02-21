#include <stdio.h>

/**
 * main - will enter into program that prints various types of sizein c.
 *
 * Return: Will always be 0
 */

int main(void)
{
	printf("Size of a char: %lu"sizeof(char));
	printf("Size of an int: %lu"sizeof(int));
	printf("Size of a long int: %lu"sizeof(long));
	printf("Size of a long long int: %lu"sizeof(long long));
	printf("Size of a float: %lu"sizeof(float));

	return (0);
}
