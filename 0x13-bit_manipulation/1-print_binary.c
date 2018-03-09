#include "holberton.h"


/**
 * print_binary - prints the binary number
 * @n: the number
 */
void print_binary(unsigned long int n)
{
	int i, on;

	if (n == 0)
		_putchar('0');
	for (i = 31; i >= 0; i--)
	{
		if (((n >> i) & 1) == 1)
			on = 1;
		if (on == 1)
			putchar('0' + ((n >> i) & 1));
	}
}
