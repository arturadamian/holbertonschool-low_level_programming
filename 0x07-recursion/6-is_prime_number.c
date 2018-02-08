#include "holberton.h"


/**
 * prime - finds the prime number
 * @v: the number
 * @i: the parameter
 *
 * Return: 1 if it is prime or 0 if not
 */
int prime(int v, int i)
{
	if (i > v)
		return (0);
	if (v % i == 0 && v != i)
		return (0);
	if (v % i != 0 && v != i)
		return (prime(v, i + 1));
	return (1);
}
/**
 * is_prime_number - checks the conditions
 * @n: the number
 *
 * Return: the result of previous function
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (prime(n, 2));
}
