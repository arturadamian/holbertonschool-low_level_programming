#include "holberton.h"


/**
 * print_binary - prints the binary number
 * @n: the number
 */
void print_binary(unsigned long int n)
{
	int i;

	for (i = 63; i > 0; i--)
		if (((n >> i) & 1) == 1)
			break;
	while (i >= 0)
	{
		_putchar('0' + ((n >> i) & 1));
		i--;
	}
}
