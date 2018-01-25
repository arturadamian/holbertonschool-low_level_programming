#include "holberton.h"
/**
 * mul - multiplies two integers
 * @a: first parameter
 * @b: second parameter
 *
 * Return: 0 (success)
 */

int mul(int a, int b)
{
		if (b == 1)
			return (a);
		return (a + (mul(a, b - 1)));
}
