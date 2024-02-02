#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size  the hash table
 * 
 * Return: pointer to hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *tables;

	if (size == 0)
		return (NULL);

	tables = calloc(1, sizeof(hash_table_t));
	if (tables == NULL)
		return (NULL);

	tables->size = size;
	tables->array = calloc(size, sizeof(hash_node_t *));
	if (tables->array == NULL)
	{
		free(tables);
		return (NULL);
	}
	return (tables);
}
