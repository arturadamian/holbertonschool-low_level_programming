#include "holberton.h"


/**
 * clear_bit - sets bit to a zero
 * @n: poiunter to a number
 * @index: positin
 *
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{

	if (!*n)
		return (-1);
	if (index > sizeof(unsigned long int) * 8 - 1)
		return (-1);
	*n &= ~(1 << index);
		return (1);
}
