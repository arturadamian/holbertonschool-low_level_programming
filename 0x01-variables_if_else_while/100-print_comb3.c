#include <stdio.h>
/**
 * main - printing the smallest numbers
 *
 * Return: 0 (success)
 */
int main(void)
{
	int c;

	for (c = 0; c < 100; c++)
	{
		if (!(c / 10 >= c % 10))
		{
		putchar('0' + c / 10);
		putchar('0' + c % 10);
		if (c != 89)
		putchar(',');
		putchar(' ');
		}
	}
	putchar ('\n');
	return (0);
}
