#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point of app
 * @argc: command line argument
 * @argv: arguments to multiply
 * Return: 1 or 0
 */

int main(int argc, char *argv[])
{
	int i, result = 1;

	if (argc > 2 && argc < 4)
	{
		for (i = 1; i < argc; i++)
		{
			result *= atoi(argv[i]);
		}
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
