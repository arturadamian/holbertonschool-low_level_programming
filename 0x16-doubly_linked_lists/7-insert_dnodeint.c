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
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	temp = *h;
	if (idx == 0)
	{
		new->prev = NULL;
		new->next = temp;
		temp->prev = new;
		*h = new;
		return (new);
	}
	while (temp)
	{
		if (idx - 1  == c)
		{
			new->next = temp->next;
			temp->next = new;
			new->prev = temp;
			temp = temp->next;
			temp->prev = new;
			return (new);
		}
		c++;
		temp = temp->next;
	}
	return (NULL);
}
