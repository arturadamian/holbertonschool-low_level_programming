#include "holberton.h"


/**
 * reverse_array - reverses the conbtent of an array of integers
 * @a: pointer to an array
 * @n: the number of elements of an array
 */
void reverse_array(int *a, int n)
{
	int t;
	int l = 0;

	n -= 1;
	while (l < n)
	{
		t = a[l];
		a[l] = a[n];
		a[n] = t;
		l++;
		n--;
	}
}
