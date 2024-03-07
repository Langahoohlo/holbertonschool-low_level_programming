#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main- entry point
 * @argc: commandline argument
 * @argv: commandline argument
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int i, result = 0;

	if (argc > 2)
	{
		for (i = 1; i < argc; i++)
			if (isdigit(*argv[i]) && *argv[i] == '\0')
			{
				result += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", result);
	return (0);
}
