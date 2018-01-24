#include "holberton.h"

/**
 * print_sign - prints the sign of a number
 * @n: first parameter
 * Return: 1 if positive, -1 if negative, 0 is a zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		n = 1;
	}
	else if (n == 0)
	{
		_putchar('0');
		n = 0;
	}
	else
	{
		_putchar('-');
		n = -1;
	}
	return (n);
}
