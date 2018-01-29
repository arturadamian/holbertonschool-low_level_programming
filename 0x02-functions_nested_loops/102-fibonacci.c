#include <stdio.h>
/**
 * main -  prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: 0 (success)
 */
int main(void)
{
	long int f;
	long int b = 1;
	long int c = 2;
	int a;

	printf("%ld, ", b);
	printf("%ld, ", c);

	for (a = 3; a <= 50; a++)
	{
		f = b + c;
		b = c;
		c = f;

		if (a < 50)
			printf("%ld, ", f);
		else
			printf("%ld", f);
	}
	return (0);
}
