#include "holberton.h"
/**
 * print_diagonal - draws a diagonal line
 * @n: first parameter
 */
void print_diagonal(int n)
{
	int s = 1;
	int i;

	if (n > 0)
	{
		while (s <= n)
		{
			for  (i = 2; i <= s; i++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
			s++;
		}
	}
	else
		_putchar('\n');
}
