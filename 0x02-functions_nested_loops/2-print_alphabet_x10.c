#include "holberton.h"
/**
 * print_alphabet_x10void print_alphabet_x10 - printing the alphabet 10 times
 *
 * Return: 0 (success)
 */
void print_alphabet_x10(void)
{
	int i = 0;
	int s;

	while (i < 10)
	{
		for (s = 'a'; s <= 'z'; s++)
		{
		_putchar(s);
		}
	_putchar('\n');
	i++;
	}
}
