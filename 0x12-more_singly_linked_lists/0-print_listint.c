#include "lists.h"


/**
 * print_listint - prints all the elements of the linked list
 * @h: pointrer to a list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;

	}
	return (count);
}
