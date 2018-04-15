#include "lists.h"


/**
 * insert_dnodeint_at_index - inserts a node at index
 * @h: pointer to a list
 * @idx: index
 * @n: some data
 *
 * Return: a pointer to a node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *temp;
	unsigned int c = 0;

	if (!h)
		return (NULL);
	temp = *h;
	if (idx == 0)
		return (add_dnodeint(h, n));
	for (c = 0; temp && c < idx; c++)
		temp = temp->next;
	if (!temp && c == idx)
		return (add_dnodeint_end(h, n));
	else if (temp && c == idx)
	{
		new = malloc(sizeof(dlistint_t));
		if (!new)
			return (NULL);
		new->n = n;
		new->next = temp->next;
		new->prev = temp;
		temp->next = new;
		temp->next->prev = new;
		return (new);
	}
	return (NULL);
}
