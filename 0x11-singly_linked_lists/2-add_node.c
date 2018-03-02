#include "lists.h"


/**
 * _strlen - counts the length of the string
 * @s: pointer to a string
 *
 * Return: the number of charachters
 */
int _strlen(const char *s)
{
	int i;

	while (*s)
	{
		i++;
		s++;
	}
	return (i);
}
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

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	if (!new->str)
		return (NULL);
	new->len = _strlen(str);
	new->next = *head;
	*head = new;
	return (new);
}
