#include "lists.h"

/**
 * sum_dlistint - sums all the data
 * @head: pointer to a list
 *
 * Return: returnst the sum
 */
int sum_dlistint(dlistint_t *head)
{
	unsigned int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
