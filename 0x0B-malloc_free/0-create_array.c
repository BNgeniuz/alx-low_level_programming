#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * create_array - a function that creates an array of chars,
  * and initializes it with a specific char
  * returns NULL if size = 0
  * returns a pointer to the array, or NULL if it fails
  *
  * @size: array size
  * @c: array xter to be fill
  *
  * Return: 0 (arrays of chars)
  */

char *create_array(unsigned int size, char c)
{
	unsigned int x;
	char *y;

	if (size == 0)
		return (NULL);

	y = malloc(size * sizeof(char));

	if (y == NULL)
		return (NULL);

	for (x = 0; x < size; x++)
	{
		y[x] = c;
	}

	return (y);
}
