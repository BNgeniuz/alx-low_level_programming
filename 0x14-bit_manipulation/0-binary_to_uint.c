#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: binary number string to input
 *
 * Return: 0 (binary unsigned)
 */

unsigned int binary_to_uint(const char *b)
{
	int x;
	unsigned int binary_value = 0;

	if (!b)
		return (0);

	for (x = 0; b[x]; x++)
	{
		if (b[x] < '0' || b[x] > '1')
			return (0);
		binary_value = 2 * binary_value + (b[x] - '0');
	}

	return (binary_value);
}
