 #include "holberton.h"
/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int i;
	int s;
	int r;

	for (i = 0; i <= 9; i++)
	{
		for (s = 0; s <= 9; s++)
		{
			r = s * i;

			if (r < 10)
			{
				_putchar(' ');
				_putchar('0' + r);
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar(r / 10 + '0');
				_putchar(r % 10 + '0');
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
