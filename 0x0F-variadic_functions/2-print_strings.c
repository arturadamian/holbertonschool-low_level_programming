#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>


/**
 * print_strings - prints strings(arguments)
 * @separator: separator
 * @n: count
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	char *p;

	va_start(valist, n);
	for (i = 0; i < n; i++)
	{
		p = va_arg(valist, char *);
		if (p == NULL)
			printf("(nil)");
		printf("%s", p);
		if ((i != (n - 1)) && (separator != NULL))
			printf("%s", separator);
	}
	printf("\n");
	va_end(valist);
}
