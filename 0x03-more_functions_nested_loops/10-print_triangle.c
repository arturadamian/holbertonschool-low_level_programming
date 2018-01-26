#include "holberton.h"
/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: first parameter
 */
void print_triangle(int size)
{
	int a;
	int b;

	if (size > 0)
	{
		for (a = 1; a <= size; a++)
		{
			for (b = size; b >= 1; b--)
			{
				if (b > a)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
