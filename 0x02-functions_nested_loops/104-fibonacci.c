#include <stdio.h>
/**
 * main -  prints the first 98 Fibonacci numbers, starting with 1 and 2
 *
 * Return: 0 (success)
 */
int main(void)
{
	double f;
	double b = 1;
	double c = 2;
	int a;

	printf("%.0f, ", b);
	printf("%.0f, ", c);

	for (a = 3; a <= 98; a++)
	{
		f = b + c;
		b = c;
		c = f;

		if (a < 98)
			printf("%.0f, ", f);
		else
			printf("%.0f", f);
	}
	printf("\n");
	return (0);
}
