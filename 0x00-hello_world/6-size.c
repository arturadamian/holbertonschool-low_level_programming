/**
 *main - prints the size of types
 *
 *Return: the program should return 0
 *
 */
#include <stdio.h>
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
