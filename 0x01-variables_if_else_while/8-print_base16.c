#include <stdio.h>
/**
 * main - printing the alphabet
 *
 * Return: 0 (success)
 */
int main(void)
{
	int c = '0';
	char b = 'a';

	while (c <= '9')

	{
		putchar (c);
		c++;
	}

	while (b <= 'f')

	{
		putchar (b);
		b++;
	}

	putchar('\n');

	return (0);
}
