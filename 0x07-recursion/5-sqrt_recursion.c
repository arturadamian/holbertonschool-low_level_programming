#include "holberton.h"


/**
 * _recu - helps to calculate the root
 * @v: the number
 * @i: root
 *
 * Return: the root if exists
 */
int _recu(int v, int i)
{
	if (i * i == v)
		return (i);
	if (i * i > v)
		return (-1);
	return (_recu(v, i + 1));
}
/**
 * _sqrt_recursion - returns thge natural square of a root number
 * @n: the number
 *
 * Return: the square
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if ((n == 1) || (n == 0))
		return (n);
	else
		return (_recu(n, 1));
}
