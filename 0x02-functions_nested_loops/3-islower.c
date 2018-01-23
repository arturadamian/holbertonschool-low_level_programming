#include "holberton.h"
/**
 * _islower - checks the numbers for lowercase and uppercase
 *@c: first operand
 * Return: 0 if its uppercase or 1 if its lowercase
 */
int _islower(int c)
{
	if (c > 64 && c < 91)
		c = 0;
	else
		c = 1;
	return (c);
}
