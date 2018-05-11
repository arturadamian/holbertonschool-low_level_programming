#include "hash_tables.h"


/**
 * hash_table_set - adds an element to the hash table
 * @ht: a table
 * @key: a key
 * @value: a value
 *
 * Return: 1 if succeeded or 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new, *old;
	unsigned long int index = 0;

	if (key == NULL || strcmp(key, ""))
		return (0);
	if (ht == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	old = ht->array[index];
	while (old)
	{
		if (strcmp(key, old->key) == 0)
		{
			free(old->value);
			old->value = strdup(value);
			if (old->value == NULL)
				return (0);
			return (1);
		}
		old = old->next;
	}
	new = malloc(sizeof(hash_node_t *));
	if (new == NULL)
		return (0);
	new->value = strdup(value);
	if (new->value == NULL)
		return (0);
	new->key = strdup(key);
	if (new->key == NULL)
		return (0);
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
