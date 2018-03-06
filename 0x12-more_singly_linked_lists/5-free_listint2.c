#include "lists.h"


/**
 * free_listint2 - frees the list
 * @head: pointer to a pointer
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	temp = *head;
	if (*head != NULL)
	{
		while (*head)
		{
			temp = temp->next;
			free(*head);
			*head = temp;
		}
	}
}
