#include "search_algos.h"
/**
 * linear_search - function that searches for a value in an array of integers
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: index or -1
 */
int linear_search(int *array, size_t size, int value)
{
	unsigned int i;

	if (array)
	{
		for (i = 0; i < size; i++)
		{
			printf("Value checked array[%d] = [%d]\n", i, array[i]);
			if (array[i] == value)
				return (i);
		}
	}
	return (-1);
}
