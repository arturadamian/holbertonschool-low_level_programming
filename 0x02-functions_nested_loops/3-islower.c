#include "holberton.h"
/**
 * _islower - checks the numbers for lowercase and uppercase
 *@c: first operand
 * Return: 0 if its uppercase or 1 if its lowercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		c = 1;
	else
		c = 0;

	return (c);
}
