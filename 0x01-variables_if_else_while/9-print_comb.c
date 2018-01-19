#include <stdio.h>
/**
 * main - printing the alphabet
 *
 * Return: 0 (success)
 */
int main(void)
{
	int c = 0;

	while (c <= 9)
	{
			putchar (c + '0');

			if (c != 9)
			{
				putchar (',');
				putchar (' ');
			}
		c++;
	}
	putchar('\n');

	return (0);
}
