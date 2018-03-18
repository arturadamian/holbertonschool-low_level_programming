#include "function_pointers.h"
#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * op_add - sum
 * @a: first parameter
 * @b: second parameter
 *
 * Return: the sum
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - sub
 * @a: first parameter
 * @b: second parameter
 *
 * Return: returns the differece
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - mul
 * @a: first parameter
 * @b: second parameter
 *
 * Return: the multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - div
 * @a: first parameter
 * @b: second parameter
 *
 * Return: the division
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - mod
 * @a: first parameter
 * @b: second parameter
 *
 * Return: the modulus
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
