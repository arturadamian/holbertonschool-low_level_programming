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

	for (a = 2; a < c; a++)
	{
		while (c % a == 0)
			c = c / a;
	}
	printf("%ld\n", c);
	return (0);
}
