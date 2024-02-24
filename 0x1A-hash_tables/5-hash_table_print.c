#include "./hash_tables.h"

/**
 * hash_table_print - function that prints a hash table.
 * @ht: ptr to hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *no_de;
	unsigned long int l;
	unsigned char c_flags = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (l = 0; l < ht->size; l++)
	{
		if (ht->array[l] != NULL)
		{
			if (c_flags == 1)
				printf(", ");

			no_de = ht->array[l];
			while (no_de != NULL)
			{
				printf("'%s': '%s'", no_de->key, no_de->value);
				no_de = no_de->next;
				if (no_de != NULL)
					printf(", ");
			}
			c_flags = 1;
		}
	}
	printf("}\n");
}
