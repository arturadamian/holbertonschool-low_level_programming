#include "holberton.h"

/**
 * print_number - prints a long integer with a putchar
 * @n: first parametery
 */

void print_number(int n)
{
	int i = 1;
	int s = 1;
	int a = n;

	while (a > 9 || a < -9)
	{
		a = a / 10;
		s = s * 10;
			i++;
	}
	while (i > 0)
	{
		if (n < 0)
		{
			n = n * -1;
			_putchar('-');
		}
		_putchar(((n / s) % 10) + '0');
		s = s / 10;
		i--;
	}
}
