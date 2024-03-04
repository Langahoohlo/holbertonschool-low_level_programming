#include "main.h"

/**
 * puts_half - function to print half of string
 * @str: string to print half of it
 */

void puts_half(char *str)
{
	int i, j, len = 0, middleIndex;

	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}

	middleIndex = len / 2;

	if (len % 2 == 0)
	{
		for (j = middleIndex; j < len; j++)
		{
			_putchar(str[j]);
		}
	}

	else
	for (j = 0; j < len / 2; j++)
		_putchar(str[j]);
	_putchar('\n');
}
