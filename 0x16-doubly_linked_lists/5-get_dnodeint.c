#include "lists.h"


/**
 * get_dnodeint_at_index - get the node at index
 * @head: pointer to a node
 * @index: index
 *
 * Return: pointer to a node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int c = 0;

	if (!head)
		return (NULL);
	while (head)
	{
		if (c == index)
			return (head);
		c++;
		head = head->next;
	}
	return (NULL);
}
