#include "holberton.h"

/**
 * print_number - prints a long integer with a putchar
 * @n: number (a)
 */

void print_number(int n)
{
	int c = 1;
	int a = n;
	int d = 1;

	if (a < 0)
		_putchar('-');
	while (a > 9 || a < -9)
	{
		a /= 10;
		d *= 10;
		c++;
	}
	for (a = n; c > 0; c--)
	{
		if (a < 0)
			_putchar(a / d * -1 + '0');
		else
			_putchar(a / d + '0');
		a %= d;
		d /= 10;
	}
}
