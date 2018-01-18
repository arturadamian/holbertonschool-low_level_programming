#include <stdio.h>

/**
 * main - prints the size of various types
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char x;
	int  y;
	long int s;
	long long int d;
	float t;

	printf("Size of a char: %d byte(s)\n", sizeof(x));
	printf("Size of a int: %d byte(s)\n", sizeof(y));
	printf("Size of a long int: %d byte(s)\n", sizeof(s));
	printf("Size of a long long int: %d byte(s)\n", sizeof(d));
	printf("Size of a float: %d byte(s)\n", sizeof(t));
	return (0);
}
