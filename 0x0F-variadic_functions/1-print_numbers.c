#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>


/**
 * print_numbers - prints numbers(arguments)
 * @separator: separates numbers
 * @n: count
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;

	va_start(valist, n);
	for (i = 0; i < n; i++)
	{
		if (separator != NULL)
		{
			printf("%d", va_arg(valist, int));
			if (i != (n - 1))
				printf("%s", separator);
		}
		else
			printf("%d", va_arg(valist, int));
	}
	printf("\n");
	va_end(valist);
}
