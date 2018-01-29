#include <stdio.h>
/**
 * main -  prints the sum of even  Fibonacci numbers
 *
 * Return: 0 (success)
 */
int main(void)
{
	unsigned long int f = 0;
	unsigned long int b = 1;
	unsigned long int c = 2;
	unsigned long int sum = 2;

	while (f <= 4000000)
	{
		f = b + c;
		b = c;
		c = f;
		if (f % 2 == 0)
		{
			sum += f;
		}
	}
	printf("%lu\n", sum);
	return (0);
}
