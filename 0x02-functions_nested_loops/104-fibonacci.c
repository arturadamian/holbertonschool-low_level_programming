#include <stdio.h>
/**
 * main -  prints the first 98 Fibonacci numbers, starting with 1 and 2
 *
 * Return: 0 (success)
 */
int main(void)
{
	unsigned int f;
	unsigned int b = 1;
	unsigned int c = 2;
	int a;

	printf("%u, ", b);
	printf("%u, ", c);

	for (a = 3; a <= 98; a++)
	{
		f = b + c;
		b = c;
		c = f;

		if (a < 98)
			printf("%u, ", f);
		else
			printf("%u\n", f);
	}
	return (0);
}
