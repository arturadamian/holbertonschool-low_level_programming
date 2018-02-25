#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>


int _putchar(char);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void _print_int(va_list val);
void _print_float(va_list val);
void _print_str(va_list val);
void _print_char(va_list val);
typedef struct op
{
	char *op;
	void (*f)();
} op_t;
#endif
