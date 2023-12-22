#include "hash_tables.h"

/**
 * key_index - Write a function that gives you the index of a key
 * @key: input key
 * @size: input size
 *
 * Return: 0 (success)
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
