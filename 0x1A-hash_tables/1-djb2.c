#include "hash_tables.h"

/**
 * hash_djb2 - write hash function implementing the djb2 algorithm.
 * @str: input string
 *
 * Return: 0 (success)
 */
unsigned long int hash_djb2(const unsigned char *str)
{
    unsigned long int hash;
    int c;

    hash = 5381;
    while ((c = *str++))
        hash = ((hash << 5) + hash) + c; /* hash * 33 + c */

    return (hash);
}
