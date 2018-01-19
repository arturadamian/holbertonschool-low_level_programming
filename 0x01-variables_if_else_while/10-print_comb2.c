#include <stdio.h>
/**
 * main - printing the alphabet
 *
 * Return: 0 (success)
 */
int main(void)
{
	int i;
	int c = 0;
	int y = 0;

	for (i = 0; i <= 99; i++)
	{
		if (c == 10)
		{
			c = 0;
			y++;
		}

		putchar(y + '0');
		putchar(c + '0');

		if (i != 99)
		{
			putchar(',');
			putchar(' ');
			c++;
		}
	}

	putchar('\n');

	return (0);
}
