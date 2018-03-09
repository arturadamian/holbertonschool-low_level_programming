#include "holberton.h"


/**
 * get_bit - get the value of a bit at given position
 * @n: int
 * @index: position
 *
 * Return: the value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bit = 1;

	if (index > 63)
		return (-1);
	bit <<= index;
	return ((n & bit) >> index);
}
