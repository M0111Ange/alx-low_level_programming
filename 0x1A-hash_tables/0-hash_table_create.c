#include "hash_tables.h"

/**
 *hash_table_create - Creates a new hash table
 *
 *@size: The size of the new hash table created
 *Return: A pointer to the hash table created
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int i;

	table = malloc(sizeof(*table));
	if (table == NULL)
	{
		free(table);
		return (NULL);
	}
	table->array = malloc(sizeof(*(table->array)) * (size));
	if (table->array == NULL)
	{
		free(table->array);
		free(table);
		return (NULL);
	}
	table->size = size;
	for (i = 0; i < size; i++)
	{
		(table->array)[i] = NULL;
	}
	return (table);
}
