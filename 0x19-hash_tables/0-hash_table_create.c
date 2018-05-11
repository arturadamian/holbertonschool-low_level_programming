#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 *
 * Return: a pointer to a newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *table;
	hash_node_t *node;

	table = malloc(sizeof(hash_table_t) * size);
	if (table == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		node = malloc(sizeof(char *) * 2);
		if (node == NULL)
			return (NULL);
	}
	return (table);
}
