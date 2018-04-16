#include "lists.h"


/**
 *
 *
 *
 *
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int c;

	if (!head)
		return (-1);
	current = *head;
	if (index == 0 && current)
	{
		*head = current->next;
		free(current);
		return (1);
	}
	else if (index == 0 && !current)
		return (1);
	for (c = 0; current && c < index; c++)
		current = current->next;
	if (c == index)
	{
		if (current->next && c == index)
		{
			current->prev->next = current->next;
			if (current->next)
				current->next->prev = current->prev;
			free(current);
			return (1);
		}
		return (1);
	}
	return (-1);
}
