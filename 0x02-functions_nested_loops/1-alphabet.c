#include "holberton.h"
/**
 * print_alphabet - printing the alphabet
 *
 * Return: 0 (success)
 */
void print_alphabet(void)
{
	int s;
	for (s = 'a'; s <= 'z'; s++)
	{
		_putchar(s);
	}
	_putchar('\n');
}
