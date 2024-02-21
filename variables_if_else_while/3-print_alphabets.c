#include<stdio.h>

/**
 * main - to print alphabets
 *
 * Return - will be a char
 */

int main(void)
{
	char a;

	for(a = 'a'; a <= 'z'; a++)
	putchar(a);	
	putchar('\n');
	for(a = 'A'; a <= 'Z'; a++)
	putchar(a);
	return (0);
}
