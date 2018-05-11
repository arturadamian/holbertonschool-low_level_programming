#nclude "hash_tables.h"


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
	hash_node_t new, old;
	unsigned long int index = 0;

	if (key == NULL || key == "")
		return (0);
	if (ht == NULL)
		return (0);
	index = key_index(key, ht->size);
	old = ht->array[index];
	while (old)
	{
		if (strcmp(key, ht->key) == 0)
		{
			free(ht->value);
			ht->value = strdup(value);
			if (ht->strdup == NULL)
				retturn (0);
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
}
