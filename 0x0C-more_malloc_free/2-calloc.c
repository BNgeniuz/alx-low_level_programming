#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: allocate memory for an array
 * @size: memory size
 *
 * Return: 0 (memory alloacation)
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int a = 0, b = 0;
	char *ptr;

	if (nmemb == 0 || size == 0)
	return (NULL);

	b = nmemb * size;
	ptr = malloc(b);

	if (ptr == NULL)
	return (NULL);

	while (a < b)
	{
	ptr[a] = 0;
	a++;
	}

	return (ptr);
}
