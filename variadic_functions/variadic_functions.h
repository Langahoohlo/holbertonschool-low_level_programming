#ifndef _VARIADIC_F
#define _VARIADIC_F
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

typedef struct op
{
        char *op;
        void (*f)(va_list);
} p_op;

void pr_int(va_list);
void pr_float(va_list);
void pr_char(va_list);
void pr_str(va_list);

#endif
