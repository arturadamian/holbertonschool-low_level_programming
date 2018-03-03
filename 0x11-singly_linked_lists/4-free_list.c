#include "lists.h"


/**
 * free_list - frees the linked list
 * @head: pointer to a list
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		head = temp;
		temp = head->next;
		free(head->str);
		free(head);
	}
}
