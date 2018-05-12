#include "hash_tables.h"


/**
 * hash_table_print - prints a hash table
 * @ht: a hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;

	if (ht)
	{
		putchar('{');
		for (i = 0; i < ht->size; i++)
		{
			node = ht->array[i];
			while (node)
			{
				printf("'%s': '%s', ", node->key, node->value);
				if (node->next == NULL)
					printf("'%s': '%s'",
					       node->key, node->value);
				node = node->next;
			}
		}
		putchar('}');
		putchar('\n');
	}
}
