#include "variadic_functions.h"
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...)
{
	int i, sum = 0;
	va_list ptr;
	va_start(ptr, n);

	for (i = ptr; i >= 0; i++)
	{
		sum += va_arg(ptr, int);
	}
	va_end(ptr);
	return (sum);
}
