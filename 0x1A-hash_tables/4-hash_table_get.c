#include "hash_tables.h"

/**
 *hash_table_get - Retrieves a value associated with a key
 *
 *@ht: The hash table being queried
 *@key: The key being searched for
 *Return: The value being searched for, or NULL if not found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int node_index;
	hash_node_t *node;

	if (!ht || strlen(key) == 0)
		return (NULL);
	node_index = key_index((const unsigned char *)key, ht->size);
	node = (ht->array)[node_index];
	if (!node)
		return (NULL);
	while (node)
	{
		if (strcmp(node->key, key) == 0)
		{
			return (node->value);
		}
		node = node->next;
	}
	return (NULL);
}
