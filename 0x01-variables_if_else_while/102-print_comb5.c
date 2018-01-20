#include <stdio.h>
/**
 * main - printing random numbers with conditions
 *
 * Return: 0 (success)
 */
int main(void)
{
	int a;
	int b;
	int c;
	int d;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			for (c = 0; c <= 9; c++)
			{
				for (d = 0; d <= 9; d++)
				{
					if ((a == c && b < d) || (a < c))
					{
						putchar('0' + a);
						putchar('0' + b);
						putchar(' ');
						putchar('0' + c);
						putchar('0' + d);
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar ('\n');

	return (0);

}
