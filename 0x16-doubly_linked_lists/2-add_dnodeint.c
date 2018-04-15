#include "lists.h"


/**
 * add_dnodeint - add a new node im the beginning
 * @head: pointer to a list
 * @n: the data
 *
 * Return: a pointer to a new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head)
		(*head)->prev = new;
	*head = new;
	return (new);
}
