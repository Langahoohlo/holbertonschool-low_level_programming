#include <stdio.h>

/**
 * main - program to print letter
 *
 * Return: will return a string
 */

int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	if (a != 'e' && a != 'q')
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
