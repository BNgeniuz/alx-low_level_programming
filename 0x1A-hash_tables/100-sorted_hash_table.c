#include "hash_tables.h"

shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);

/**
 * shash_table_create - sorted hash table creations
 * @size: new sorted hash table size
 *
 * Return: If an error occurs - NULL
 * Otherwise - a ptr hash table.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	unsigned long int l;

	ht = malloc(sizeof(shash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(shash_node_t *) * size);
	if (ht->array == NULL)
		return (NULL);
	for (l = 0; l < size; l++)
		ht->array[l] = NULL;
	ht->shead = NULL;
	ht->stail = NULL;

	return (ht);
}

/**
 * shash_table_set - sorted hash table element add
 * @ht: A ptr input
 * @key: The key to input value
 * @value: The key value
 *
 * Return: 0 (success)
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *nv, *pmt;
	char *val_cpy;
	unsigned long int num;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	val_cpy = strdup(value);
	if (val_cpy == NULL)
		return (0);

	num = key_index((const unsigned char *)key, ht->size);
	pmt = ht->shead;
	while (pmt)
	{
		if (strcmp(pmt->key, key) == 0)
		{
			free(pmt->value);
			pmt->value = val_cpy;
			return (1);
		}
		pmt = pmt->snext;
	}

	nv = malloc(sizeof(shash_node_t));
	if (nv == NULL)
	{
		free(val_cpy);
		return (0);
	}
	nv->key = strdup(key);
	if (nv->key == NULL)
	{
		free(val_cpy);
		free(nv);
		return (0);
	}
	nv->value = val_cpy;
	nv->next = ht->array[num];
	ht->array[num] = nv;

	if (ht->shead == NULL)
	{
		nv->sprev = NULL;
		nv->snext = NULL;
		ht->shead = nv;
		ht->stail = nv;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		nv->sprev = NULL;
		nv->snext = ht->shead;
		ht->shead->sprev = nv;
		ht->shead = nv;
	}
	else
	{
		pmt = ht->shead;
		while (pmt->snext != NULL && strcmp(pmt->snext->key, key) < 0)
			pmt = pmt->snext;
		nv->sprev = pmt;
		nv->snext = pmt->snext;
		if (pmt->snext == NULL)
			ht->stail = nv;
		else
			pmt->snext->sprev = nv;
		pmt->snext = nv;
	}

	return (1);
}

/**
 * shash_table_get - value retrieve sorted hash table.
 * @ht: ptr to input hash table.
 * @key: key value input
 *
 * Return: 0 (success)
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *no_de;
	unsigned long int num;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	num = key_index((const unsigned char *)key, ht->size);
	if (num >= ht->size)
		return (NULL);

	no_de = ht->shead;
	while (no_de != NULL && strcmp(no_de->key, key) != 0)
		no_de = no_de->snext;

	return ((no_de == NULL) ? NULL : no_de->value);
}

/**
 * shash_table_print - hash table in order.
 * @ht: ptr to input hash table.
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *no_de;

	if (ht == NULL)
		return;

	no_de = ht->shead;
	printf("{");
	while (no_de != NULL)
	{
		printf("'%s': '%s'", no_de->key, no_de->value);
		no_de = no_de->snext;
		if (no_de != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - hash table in reverse order.
 * @ht: ptr hash table to input
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *no_de;

	if (ht == NULL)
		return;

	no_de = ht->stail;
	printf("{");
	while (no_de != NULL)
	{
		printf("'%s': '%s'", no_de->key, no_de->value);
		no_de = no_de->sprev;
		if (no_de != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_delete - hash table delete
 * @ht: ptr to input hash table
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_table_t *master = ht;
	shash_node_t *no_de, *pmt;

	if (ht == NULL)
		return;

	no_de = ht->shead;
	while (no_de)
	{
		pmt = no_de->snext;
		free(no_de->key);
		free(no_de->value);
		free(no_de);
		no_de = pmt;
	}

	free(master->array);
	free(master);
}
