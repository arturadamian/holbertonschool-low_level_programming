#include "function_pointers.h"
#include <stdlib.h>


/**
 * array_iterator - executes a function given as a parameter on each element
 * @array: array
 * @size: size of the array
 * @action: pointer to a function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL)
		return;
	if (size == 0)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
