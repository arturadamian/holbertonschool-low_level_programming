#include "holberton.h"
/**
 * print_last_digit - prints the last digit of a number
 * @c: first parameter
 * Return: last digit
 */
int print_last_digit(int c)
{
	if (c < 0)
		c = (c * -1) % 10;

	else
		c = c % 10;

	_putchar('0' + c);
	return (c);
}
