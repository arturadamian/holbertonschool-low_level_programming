#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>


/**
 * _print_char - prints a charachter
 * @val: argument
 */
void _print_char(va_list val)
{
	printf("%c", va_arg(val, int));
}
/**
 * _print_int - prints an integer
 * @val: arg
 */
void _print_int(va_list val)
{
	printf("%d", va_arg(val, int));
}
/**
 * _print_float - prints a float integer
 * @val: argument
 */
void _print_float(va_list val)
{
	printf("%f", va_arg(val, double));
}
/**
 * _print_str - prints a string
 * @val: argument
 */
void _print_str(va_list val)
{
	char *p;

	p = va_arg(val, char *);
	if (p == NULL)
		p = "(nil)";
	printf("%s", p);
}


/**
 * print_all - prints everything
 * @format: list of formats
 */
void print_all(const char * const format, ...)
{
	int x, y;
	va_list val;
	char *emp, *comma;
	op_t types[] = {
		{"c", _print_char},
		{"i", _print_int},
		{"f", _print_float},
		{"s", _print_str},
		{NULL, NULL}
	};

	va_start(val, format);
	comma = ", ";
	emp = "";
	y = 0;
	while (format[y])
	{
		x = 0;
		while (types[x].op != NULL)
		{
			if (format[y] == *types[x].op)
			{
				printf("%s", emp);
				types[x].f(val);
				emp = comma;
			}
			x++;
		}
		y++;
	}
	printf("\n");
	va_end(val);
}
