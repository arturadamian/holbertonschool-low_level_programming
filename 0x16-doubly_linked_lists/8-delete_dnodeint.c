#include "lists.h"


/**
 * delete_dnodeint_at_index - deletes a node at index
 * @head: pointer to a list
 * @index: index
 *
 * Return: 1 or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int c;

	if (!head || !*head)
		return (-1);
	current = *head;
	if (index == 0)
	{
		*head = current->next;
		if (current->next)
			current->next->prev = NULL;
		free(current);
		return (1);
	}
	for (c = 0; current && c < index; c++)
		current = current->next;
	if (c == index)
	{
		current->prev->next = current->next;
		if (current->next)
			current->next->prev = current->prev;
		free(current);
		return (1);
	}
	return (-1);
}
