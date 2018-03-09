#include "holberton.h"


/**
 * set_bit - sets the bit to 1
 * @n: number
 * @index: position
 *
 * Return: 1 if success or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (!n)
		return (-1);
	if (index > sizeof(unsigned long int) * 8 - 1)
		return (-1);
	*n |= (1 << index);
	return (1);
}
