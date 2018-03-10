#include "holberton.h"


/**
 * flip_bits - counts how many bits you need to change the num
 * @n: first number
 * @m: second number
 *
 * Return: the sum of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int c;
	int sum = 0;

	c = n ^ m;
	while (c > 0)
	{
		sum += c & 1;
		c >>= 1;
	}
	return (sum);
}
