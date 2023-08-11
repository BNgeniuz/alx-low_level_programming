#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _realloc - function that reallocates a memory block
 * using malloc and free
 * @ptr: pointer to reallocate
 * @old_size: src memory
 * @new_size: dest memory
 *
 * Return: 0 (memory realloacation)
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *xptr;
	unsigned int z;

	if (new_size == old_size)
	return (ptr);

	if (ptr == NULL)
	{
	xptr = malloc(new_size);

	if (xptr == NULL)
	return (NULL);

	return (xptr);
	}
	else
	{
	if (new_size == 0)
	{
	free(ptr);
	return (NULL);
	}
	}

	xptr = malloc(new_size);

	if (xptr == NULL)
	return (NULL);

	for (z = 0; z < old_size && z < new_size; z++)
	{
	xptr[z] = ((char *) ptr)[z];
	}

	free(ptr);
	return (xptr);
}
