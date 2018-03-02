#include "lists.h"


/**
 * add_node_end - adds a new node at the end of the list
 * @head: the first node
 * @str: pointer to a str(new node)
 *
 * Return: the address of the new element or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;
	int l;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	l = 0;
	while (str[l])
		l++;
	new->len = l;
	new->str = strdup(str);
	new->next = NULL;
	temp = *head;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}
	return (new);
}
