#include "main.h"
#include <stdio.h>

/**
 * _memcpy - a function that copies memory area
 * @src: memory source
 * @dest: memory destination
 * @n: number of byte from the memory
 *
 * Return: 0 (cpoying memory)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int c;

	for (c = 0; c < n; c++)
		dest[c] = src[c];

	return (dest);
}
