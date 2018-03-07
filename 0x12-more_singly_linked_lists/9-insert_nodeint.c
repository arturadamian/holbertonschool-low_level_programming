#include "lists.h"


/**
 * insert_nodeint_at_index - inserts a new node
 * @head: a pointer to a list
 * @idx: index
 * @n: data
 *
 * Return: the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp;
	unsigned int count = 0;

	if (!head)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	temp = *head;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	while (temp)
	{
		if ((count + 1) == idx)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		temp = temp->next;
		count++;
	}
	return (NULL);
}
