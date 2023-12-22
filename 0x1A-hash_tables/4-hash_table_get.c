#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key
 * @ht: ptr to input hash table
 * @key: key to input
 *
 * Return: 0 (success)
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *no_de;
	unsigned long int num;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	num = key_index((const unsigned char *)key, ht->size);
	if (num >= ht->size)
		return (NULL);

	no_de = ht->array[num];
	while (no_de && strcmp(no_de->key, key) != 0)
		no_de = no_de->next;

	return ((no_de == NULL) ? NULL : no_de->value);
}
