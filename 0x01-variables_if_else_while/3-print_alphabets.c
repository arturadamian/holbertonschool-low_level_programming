#include <stdio.h>
/**
 * main - printing the alphabet
 *
 * Return: 0 (success)
 */
int main(void)
{
	char c = 'a';
	char b = 'A';

	while (c <= 'z')

	{
		putchar (c);
		c++;
	}

	while (b <= 'Z')

	{
		putchar (b);
		b++;
	}

	putchar('\n');

	return (0);
}
