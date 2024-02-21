#include <stdio.h>

/**
 * main - program to print letter
 *
 * Return: will return a string
 */

int main(void)
{
	char a;

	for (a = '0'; a <= '9'; a++)
		putchar(a);
	for (a = 'a'; a <= 'f'; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
