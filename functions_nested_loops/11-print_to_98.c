#include "main.h"
#include <stdio.h>

/**
* print_to_98 - print numbers number to 98
* @num: integer argument
*/

void print_to_98(int num)
{
	if (num <= 98)
	{
		for (; num <= 98; num++)
		{
			printf("%d", num);
			if (num != 98)
			{
				printf(", ");
			}
		}
	}

	else
	{
		for (; num >= 98; num--)
		{
			printf("%d", num);

			if (num != 98)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}
