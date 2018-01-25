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
	int a = 0;

	while (a <= 50)
	{
		f = b + c;
		printf("%ld", f);

		if (a != 50)
			printf(", ");
		b = c;
		c = f;
		a++;
	}
	return (0);
}
