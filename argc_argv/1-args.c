#include "main.h"
#include <stdio.h>

/**
 * main - function to count length of arguments
 * @argc: command line length
 * @argv: arguments
 * Return: always 0
 */

int main(int argc, char *argv[]__attribute__((unused)))
{
	int i;

	if (argc < 1)
	{
		printf("0");
	}
	else
	{
		for (i = 0; i < argc; i++)
		{}
		printf("%d", i - 1);
	}
	printf("\n");
	return (0);
}

