#include "hash_tables.h"

/**
 * hash_table_set - element to Hash table.
 * @ht: hash table ptr input
 * @key: key input to the hash table
 * @value: value of the key.
 *
 * Return: 0 (success)
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *nv;
	char *val_cpy;
	unsigned long int num, l;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	val_cpy = strdup(value);
	if (val_cpy == NULL)
		return (0);

	num = key_index((const unsigned char *)key, ht->size);
	for (l = num; ht->array[l]; l++)
	{
		if (strcmp(ht->array[l]->key, key) == 0)
		{
			free(ht->array[l]->value);
			ht->array[l]->value = val_cpy;
			return (1);
		}
	}

	nv = malloc(sizeof(hash_node_t));
	if (nv == NULL)
	{
		free(val_cpy);
		return (0);
	}
	nv->key = strdup(key);
	if (nv->key == NULL)
	{
		free(nv);
		return (0);
	}
	nv->value = val_cpy;
	nv->next = ht->array[num];
	ht->array[num] = nv;

	return (1);
}
