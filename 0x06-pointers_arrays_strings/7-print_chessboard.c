#include "holberton.h"


/**
 * print_chessboard - print a chessboard
 * @a: pointer to an array
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int c;

	for (i = 0; i < 8; i++)
	{
		for (c = 0; c < 8; c++)
		{
			_putchar(a[i][c]);
		}
	_putchar('\n');
	}
}
