#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

typedef struct op
{
	char *op;
	void (*f)(va_list);
} p_op;

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

	if (s != NULL)
	{
		printf("%s", s);
	}
	else
	{
		printf("(nil)");
	}
}

/**
 * print_all - .....
 * @format: ....
 */

void print_all(const char * const format, ...)
{
	va_list ptr;
	int i, j;

	p_op ops[] = {
		{"c", pr_char},
		{"i", pr_int},
		{"f", pr_float},
		{"s", pr_str},
		{NULL, NULL}
	};

	va_start(ptr, format);

	for (i = 0; format[i]; i++)
	{
		for (j = 0; ops[j].op; j++)
		{
			if (ops[j].op[0] == format[i])
			{
				(ops[i].f)(ptr);
				if (format[i + 1])
					printf(", ");
			}
		}
	}
	putchar('\n');
	va_end(ptr);

}
