#include "lists.h"


/**
 * delete_nodeint_at_index - deletes a node
 * @head: pointer to a list
 * @index: index of a node
 *
 * Return: 1 if success or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 1;
	listint_t *temp, *del;

	if (head == NULL || *head == NULL)
		return (-1);
	temp = *head;
	if (index == 0)
	{
		temp = temp->next;
		free(*head);
		*head = temp;
		return (1);
	}
	while (temp)
	{
		if (count == index)
		{
			del = temp->next;
			temp->next = temp->next->next;
			free(del);
			return (1);
		}
		temp = temp->next;
		count++;
	}
	return (-1);
}
