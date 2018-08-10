#include "search_algos.h"

/**
 * print_array - printing an array
 * @array: pointer to the array
 * @l: left index
 * @r: right index
 */
void print_array(int *array, size_t l, size_t r)
{
	printf("Searching in array: ");
	while  (l < r)
	{
		printf("%d, ", array[l]);
		l++;
	}
	printf("%d\n", array[l]);
}

/**
 * binary_search_ - searching for an element that match the value
 * @array: pointer to the array
 * @l: left index
 * @r: right index
 * @value: value to search
 *
 * Return: index or -1
 */
int binary_search_(int *array, size_t l, size_t r, int value)
{
	size_t m = 0;

	m = l + (r - l) / 2;
	if (r >= l)
	{
		if (array[m] == value)
			return (m);
		print_array(array, l, r);
		if (array[m] > value)
			binary_search_(array, l, m - 1, value);
		binary_search_(array, m + 1, r, value);
	}
	return (-1);
}

/**
 * binary_search - main function to find a match
 * @array: pointer the array
 * @size: size of the array
 * @value: value to search
 *
 * Return: index or -1
 */
int binary_search(int *array, size_t size, int value)
{
	if (array)
		return (binary_search_(array, 0, size - 1, value));
	return (-1);
}
