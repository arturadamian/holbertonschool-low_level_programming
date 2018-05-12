#include "hash_tables.h"


/**
 * hash_table_delete - deletes a hash table
 * @ht: has table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node, *temp;

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		if (!node)
			continue;
		while (node != NULL)
		{
			temp = node->next;
			free(node->value);
			free(node->key);
			free(node);
			node = temp;
		}
	}
	free(ht->array);
	free(ht);
}
