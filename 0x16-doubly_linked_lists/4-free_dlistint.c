#include "lists.h"


/**
 * free_dlistint - frees the list
 * @head: pointer to a node
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (!head)
		return;
	temp = head;
	while (head)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}
}
