
#include "main.h"
#include <stdio.h>

/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 * @n: integer input num
 * @index: index value returns
 *
 * Return: 1 (ssucess  or -1, failure)
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
