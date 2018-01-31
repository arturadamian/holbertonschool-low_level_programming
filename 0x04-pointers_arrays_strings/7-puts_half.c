#include "holberton.h"

/**
 * puts_half - prints half of a string
 * @str: pointer to a string
 */
void puts_half(char *str)
{
	int c;
	int b;

	for (c = 0; str[c] != '\0'; c++)
		;
	b = c;
	if (c % 2 == 0)
		b = b / 2;
	else
		b = ((b - 1) / 2) + 1;
	while (b <= c)
	{
		_putchar(str[b]);
		b++;
	}
	_putchar('\n');
}
