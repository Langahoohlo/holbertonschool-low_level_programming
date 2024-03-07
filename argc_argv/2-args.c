#include "main.h"
#include <stdio.h>

/**
 * main - entry to app
 * @argc: argargument from command line
 * @argv: arguments used for app
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
