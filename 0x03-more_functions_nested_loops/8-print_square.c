#include "holberton.h"
/**
 * print_square - prints a square, followed by a new line
 * @size: first parameter
 */
void print_square(int size)
{
	int i;
	int b;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (b = 1; b <= size; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
