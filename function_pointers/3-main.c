#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry point
 * @argc: ....
 * @argv: ....
 * Return: ....
 */

int main(int argc, char *argv[])
{
	int (*oprt)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	oprt = get_op_func(argv[2]);

	if ((argv[2][0] == '/' || argv[2][0] == '%')
		&& argv[2][1] == '\0' && argv[3][0] == '0')
	{
		printf("Error\n");
		exit(100);
	}

	if (!oprt)
	{
		printf("Error\n");
		return (99);
	}

	printf("%d\n", oprt(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
