#include "holberton.h"

/**
 * spacencomma - print spaces and commas
 * @r: first parameter
 * @a: second parameter
 */
void spacencomma(int r, int a)
{
	if (a != 0)
	{
		_putchar(',');
		if (r < 10)
			_putchar(' ');
		if (r < 100)
			_putchar(' ');
		_putchar(' ');
	}
}
/**
 * puttimes - print the digits
 * @r: the result of the multiplication
 */
void puttimes(int r)
{
	if (r >= 100)
		_putchar(r / 100 + '0');
	if (r >= 10)
		_putchar(r / 10 % 10) + '0');
	_putchar(r % 10 + '0');
}
/**
 *print_times_table - prints the n times table, starting with 0
 *@n: the limit number
 */
void print_times_table(int n)
{
	int i;
	int a;
	int r;

	if (n > 0 && n < 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (a = 0; a <= n; a++)
			{
				r = i * a;
				spacencomma(r, a);
				puttimes(r);
			}
			_putchar('\n');
		}
	}
}
