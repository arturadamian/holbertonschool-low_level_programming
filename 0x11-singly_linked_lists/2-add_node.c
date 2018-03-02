#include "lists.h"


/**
 * add_node - adds a new node at the beginning of the list
 * @head: the first node
 * @str: pointer to a str(new node)
 *
 * Return: the address of the new element or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int l = 0;

	if (head != NULL || str != NULL)
	{
		new = malloc(sizeof(list_t));
		if (new == NULL)
			return (NULL);
		new->str = strdup(str);
		while (str[l])
			l++;
		new->len = l;
		new->next = *head;
		*head = new;
	}
	else
		return (NULL);
	return (new);
}
