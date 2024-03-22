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
	int (*f)(int, int);

	int n1, n2;

	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);
	f = get_op_func(argv[2]);

	if (f == NULL || (argv[2][1] != '\0'))
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') && argv[3][0] == '0')
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", f(n1, n2));

	return (0);
}
