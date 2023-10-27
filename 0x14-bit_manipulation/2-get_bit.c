#include "main.h"
#include <stdio.h>

/**
 * get_bit - return value of a bit as an index in a dec number
 * @n: number of bit to input
 * @index: bit value index
 *
 * Return: 0 (bit value return)
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;

	if (index > 63)
		return (-1);

	bit_value = (n >> index) & 1;

	return (bit_value);
}
