#include "holberton.h"

/**
 * print_rev - prints a string in revers
 * @s: first parameter
 */
void print_rev(char *s)
{
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
		;
	for (i -= 1; i >= 0; --i)
		_putchar(s[i]);
	_putchar('\n');
}
