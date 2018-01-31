#include "holberton.h"

/**
 * puts_half - prints half of a string
 * @str: pointer to a string
 */
void puts_half(char *str)
{
	int c;
	int length_of_the_string;

	for (c = 0; str[c] != '\0'; c++)
		;
	length_of_the_string = c;
	if (length_of_the_string % 2 == 0)
		c = length_of_the_string / 2;
	else
		c = (length_of_the_string - 1) / 2;
	while (c < length_of_the_string)
	{
		_putchar(str[c]);
		c++;
	}
	_putchar('\n');
}
