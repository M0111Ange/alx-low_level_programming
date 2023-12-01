#include "hash_tables.h"

/**
 *hash_table_print - Prints the whole hash table
 *
 *@ht: The pointer to the hash table
 *Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, count = 0;
	hash_node_t **array;
	hash_node_t *node;


	if (ht == NULL)
		return;
	array = ht->array;
	printf("{");
	for (i = 0; i <= ht->size; i++)
	{
		if (array[i])
		{
			node = array[i];
			while (node)
			{
				if (count >= 1)
					printf(", ");
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				count++;
			}
		}
	}
	printf("}\n");
}
