#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * pr_int - .....
 * @val: ....
 */

void pr_int(va_list val)
{
	printf("%d", va_arg(val, int));
}

/**
 * pr_char - ....
 * @val: .....
 */

void pr_char(va_list val)
{
	printf("%c", va_arg(val, int));
}

/**
 * pr_float - .....
 * @val: .....
 */

void pr_float(va_list val)
{
	printf("%f", va_arg(val, double));
}

/**
 * pr_str - ....
 * @val: .....
 */

void pr_str(va_list val)
{
	char *s = va_arg(val, char *);

	switch (s != NULL)
	{
		case 1:
			printf("%s", s);
			break;
		case 0:
			printf("(nil)");
			break;
	}
}

/**
 * print_all - .....
 * @format: ....
 */

void print_all(const char * const format, ...)
{
	va_list ptr;
	int i, j = 0;

	p_op ops[] = {
		{"c", pr_char},
		{"i", pr_int},
		{"f", pr_float},
		{"s", pr_str},
		{NULL, NULL}
	};

	va_start(ptr, format);

	while (format != NULL && format[j] != '\0')
	{
		i = 0;
		while (ops[i].op != NULL)
		{
			if (ops[i].op[0] == format[j])
			{
				(ops[i].f)(ptr);
				if (format[j + 1] != 0)
					printf(", ");
				break;
			}
			i++;
		}
		j++;
	}
	putchar('\n');
	va_end(ptr);
}
