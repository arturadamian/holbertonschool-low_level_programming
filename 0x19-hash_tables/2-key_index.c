#include "hash_tables.h"


/**
 * key_index - gives us the index of the key
 * @key: the key
 * @size: teh size of the array
 *
 * Return: the index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	return (index = hash_djb2(key) % size);

}
