#include "hash_tables.h"
/**
 * key_index - Gives the index of a key in a hash table
 * @key: the key to get the index
 * @size: the size of the hash table array
 *
 *Return: the index at which the key/value pair should be stored
 *        in the array of the hash table.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value = hash_djb2(key);
	unsigned long int index = hash_value % size;

	return (index);
}
