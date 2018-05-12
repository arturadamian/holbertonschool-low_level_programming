#include "hash_tables.h"


/**
 * hash_table_print - prints a hash table
 * @ht: a hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, temp;
	hash_node_t *node;

	temp = 1;
	if (!ht)
		return;
	putchar('{');
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] == NULL)
			continue;
		if (temp == 0)
			printf(", ");
		temp = 0;
		node = ht->array[i];
		while (node)
		{
			printf("'%s': '%s'", node->key, node->value);
			if (node->next != NULL)
				printf(", ");
			node = node->next;
		}
	}
	putchar('}');
	putchar('\n');
}
