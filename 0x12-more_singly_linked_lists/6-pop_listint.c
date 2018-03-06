#include "lists.h"


/**
 * pop_listint - deletes the firsty node
 * @head: pointer to a list
 *
 * Return: the data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	temp = *head;
	if (!*head)
		return (0);
	n = temp->n;
	temp = temp->next;
	free(*head);
	*head = temp;
	return (n);
}
