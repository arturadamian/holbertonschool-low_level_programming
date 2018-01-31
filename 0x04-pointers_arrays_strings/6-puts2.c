#include "holberton.h"


/**
 * puts2 - prints one charachter out of 2 of a string
 * @str: first parameter
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
