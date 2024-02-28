#include "main.h"
#include <stdio.h>

void rev_string(char *s)
{
	int n = 0;

	

	while (s[n] != '\0')
		n++;
	{
		for (n = n - 1; n >= 0; n--)
		{
			putchar(s[n]);
		}
	}
	putchar('\n');
}
