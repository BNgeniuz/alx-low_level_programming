#include "main.h"
#include <stdio.h>

/**
 * flip_bits - functions flips binary numbers
 * to get from one number to another
 * @n: first input num
 * @m: second input num
 * Return: 0 (lets flip it)
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int base = n ^ m;
	unsigned int flip_number = 0;


	while (base)
	{
		if (1 & base)
		{
			flip_number++;
		}
		base = base >> 1;
	}
	return (flip_number);
}
