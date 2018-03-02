#include "lists.h"


/**
 * print_list - prints all the elements of a list_t list
 * @h: a popinter to a list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		if (h->str)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
		count++;
	}
	return (count);
}
