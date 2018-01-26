#include <stdio.h>
/**
 * main - prints the numbers from 1 to 100,
 * But for multiples of three print Fizz instead of the number
 * and for the multiples of five print Buzz
 *
 * Return: 0 (success)
 */
int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 3 == 0)
			printf("Fizz");
		else if (a % 5 == 0)
			printf("Buzz");
		else if (a % 3 == 0 && a % 5 == 0)
			printf("FizzBuzz");
		else
			printf("%d", a);
		printf(" ");
	}
	printf("\n");
	return (0);
}
