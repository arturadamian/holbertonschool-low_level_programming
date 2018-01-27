#include <stdio.h>
/**
 * main - prints the largest prime factor of the number
 *
 * Return: 0 (success)
 */
int main(void)
{
	long int a;
	long int c = 612852475143;

	while (c % 2 == 0)
	{
		c = c / 2;
	}
	for (a = 3; a <= c; a = a + 2)
	{
		while (c % a == 0)
			c = c / a;
	}
	printf("%ld", a);
	printf("\n");
	return (0);
}
