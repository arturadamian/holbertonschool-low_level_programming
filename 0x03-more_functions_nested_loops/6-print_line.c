#include "holberton.h"
/**
 * print_line - draws a straight line
 * @n: first parameter
 */
void print_line(int n)
{
	int s;

	if (n > 0)
	{
		for (s = 1; s <= n; s++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
