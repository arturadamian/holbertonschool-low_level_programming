#include "lists.h"


/**
 * get_nodeint_at_index - returns the nth node of the list
 * @head: pointer
 * @index: the index of a node
 *
 * Return: the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);
	while (head != NULL)
	{
		if (count == index)
			return (head);
		head = head->next;
		count++;
	}
	return (NULL);
}
