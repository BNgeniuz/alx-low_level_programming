#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table
 * @ht: ptr to hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *master = ht;
	hash_node_t *no_de, *pmt;
	unsigned long int l;

	for (l = 0; l < ht->size; l++)
	{
		if (ht->array[l] != NULL)
		{
			no_de = ht->array[l];
			while (no_de != NULL)
			{
				pmt = no_de->next;
				free(no_de->key);
				free(no_de->value);
				free(no_de);
				no_de = pmt;
			}
		}
	}
	free(master->array);
	free(master);
}
