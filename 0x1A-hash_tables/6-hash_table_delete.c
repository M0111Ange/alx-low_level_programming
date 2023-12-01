#include "hash_tables.h"

/**
 *hash_table_delete - Function deletes a hash table
 *
 *@ht: The hash table
 *Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t **array;


	if (ht == NULL)
		return;
	array = ht->array;
	for (i = 0; i <= ht->size; i++)
	{
		if (array[i])
		{
			delete_node(array[i]);
		}
	}
	free(ht->array);
	free(ht);
}

/**
 *delete_node - Deletes a hash node
 *
 *@node: The node to be deleted
 *Return: void
 */
void delete_node(hash_node_t *node)
{
	if (node->next)
		delete_node(node->next);
	free(node->key);
	free(node->value);
	free(node);
}
