#include <stdio.h>

/**
 * main - program to print letter
 *
 * Return: will return a string
 */

int main(void)
{
	char rev;

	for (rev = 'z'; rev >= 'a'; rev--)
		putchar(rev);
	putchar('\n');
	return (0);
}
