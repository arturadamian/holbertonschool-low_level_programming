#include <stdio.h>
/**
 * main -  prints the first 98 Fibonacci numbers, starting with 1 and 2
 *
 * Return: 0 (success)
 */
int main(void)
{
	unsigned long int f;
	unsigned long int b = 1;
	unsigned long int c = 2;
	int a;

	printf("%lu, ", b);
	printf("%lu, ", c);

	for (a = 3; a <= 98; a++)
	{
		f = b + c;
		b = c;
		c = f;

		if (a < 98)
			printf("%lu, ", f);
		else
			printf("%lu", f);
	}
	printf("\n");
	return (0);
}
