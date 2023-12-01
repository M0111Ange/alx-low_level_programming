#include "hash_tables.h"

/**
 *key_index - Gives the index of a key
 *
 *@key: The hash key
 *@size: The size of the hash table
 *Return: The index to store the key/value pair at
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_key;
	unsigned long int index_key;

	hash_key = hash_djb2(key);
	index_key = hash_key % size;
	return (index_key);
}
