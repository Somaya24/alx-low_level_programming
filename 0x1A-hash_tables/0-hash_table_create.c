#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 * @size: the size of the array
 *
 * Return: A pointer to the newly createf hash table
 *         orr NULL if somethimg went wrong
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;
	unsigned long int i;

	if (size < 1)
		return (NULL);

	hash_table = malloc(sizeof(hash_table_t));

	if (hash_table == NULL)
		return (NULL);

	hash_table->size = size;
	hash_table->array = malloc(size * sizeof(hash_node_t *));
	if (hash_table->array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		hash_table->array[i] = NULL;

	return (hash_table);
}
