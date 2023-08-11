#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * array_range - function that creates an array of integers
 * @min: lowest integer
 * @max: heighest integer
 *
 * Return: 0 (integer value)
 */

int *array_range(int min, int max)
{
	int *p, s = 0;

	if (min > max)
	return (NULL);

	p = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (p == NULL)
	return (NULL);

	while (min <= max)
	{
	p[s] = min;
	s++;
	min++;
	}

	return (p);
}
