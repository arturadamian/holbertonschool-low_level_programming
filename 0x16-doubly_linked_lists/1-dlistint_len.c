#include "lists.h"


/**
 * dlistint_len - counts the ammount of nodes
 * @h: pointer to a node
 *
 * Return: the ammount of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t c = 0;

	while (h)
	{
		c++;
		h = h->next;
	}
	return (c);
}
