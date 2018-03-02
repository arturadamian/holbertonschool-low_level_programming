#include "lists.h"


/**
 * list_len - counts the number of elements of a l.list
 * @h: pointer to a linked list
 *
 * Return: the number
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	if (!h)
		return (0);
	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
