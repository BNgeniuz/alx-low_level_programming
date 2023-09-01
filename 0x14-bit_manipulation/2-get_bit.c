#include "main.h"
#include <stdio.h>

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: integer input
 * @index: index returns
 *
 * Return: 0 (get bits)
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int get_binary_val;

	if (index > 63)
		return (-1);

	get_binary_val = (n >> index) & 1;

	return (get_binary_val);
}
