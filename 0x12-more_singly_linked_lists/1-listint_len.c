#include "lists.h"


/**
 * listint_len - returns the number of nodes
 * @h: pointer
 *
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	unsigned int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
