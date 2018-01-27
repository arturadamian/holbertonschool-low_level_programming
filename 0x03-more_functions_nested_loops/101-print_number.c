#include "holberton.h"
/**
 * print_number - prints an integer
 * @n: first parametery
 */

void print_number(int n)
{
	int i = 1;
	int s = 1;
	unsigned int a = n;

	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}
	while (a > 9)
	{
		a = a / 10;
		s = s * 10;
		i++;
	}
	while (i > 0)
	{
		_putchar(((n / s) % 10) + '0');
		s = s / 10;
		i--;
	}
}
