#include "main.h"
#include <stdio.h>

/**
 * rev_string - function to reverse string
 * @s: string to reverse
 */

void rev_string(char *s)
{
	int n = 0;

	int i;

	while (s[n] != '\0')
	{
		n++;
	}

	for (i = 0; i < n / 2; i++)
	{
		char tmp = s[i];

		s[i] = s[n - 1 - i];
		s[n - 1 - i] = tmp;
	}
}
