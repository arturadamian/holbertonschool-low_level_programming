#include "hash_tables.h"


/**
 * hash_table_get - retrieves a value
 * @ht: table
 * @key: key
 *
 * Return: the value or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int index;

	if (ht == NULL || key == NULL)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];
	if (node)
	{
		while (node)
		{
			if (strcmp(key, node->key) == 0)
			{
				return (node->value);
			}
			node = node->next;
		}
	}
	return (NULL);
}
