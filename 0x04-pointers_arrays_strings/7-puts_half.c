#include "holberton.h"

/**
 * puts_half - prints half of a string
 * @str: pointer to a string
 */
void puts_half(char *str)
{
	int c;

	for (c = 0; str[c] != '\0'; c++)
		;
	if (c % 2 == 0)
		c = c / 2;
	else
		c = ((c - 1) / 2) + 1;
	while (str[c] != 0)
	{
		_putchar(str[c]);
		c++;
	}
	_putchar('\n');
}
