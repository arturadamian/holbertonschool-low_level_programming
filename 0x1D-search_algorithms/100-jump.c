#include "search_algos.h"

/**
 * jump_search - searching for an element that match the value
 * @array: pointer to the array
 * @size: size of the array
 * @value: value to search
 *
 * Return: index or -1
 */
int jump_search(int *array, size_t size, int value)
{
	unsigned int jump = 0, left = 0, right = 0;

	if (!array)
		return (-1);
	jump = sqrt(size);
	while (left < size && array[left] <= value)
	{
		printf("Value checked array[%d] = [%d]\n", left, array[left]);
		right = min(size - 1, left + jump);
		if (array[left] <= value && array[right] >= value)
			break;
		left += jump;
	}
	if (left >= size || array[left] > value)
		return (-1);
	right = min(size - 1, right);
	printf("Value found between indexes [%d] and [%d]\n", left, right);
	while (left <= right && array[left] <= value)
	{
		printf("Value checked array[%d] = [%d]\n", left, array[left]);
		if (array[left] == value)
			return (left);
		left++;
	}
	return (-1);
}
