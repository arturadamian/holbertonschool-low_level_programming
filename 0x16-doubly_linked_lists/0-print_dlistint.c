#include "lists.h"


/**
 * print_dlistint - prints all the elements of dlinked list
 * @h: pointer to the first node
 *
 * Return: ammount of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t c = 0;

	while (h)
	{
		c++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (c);
}
