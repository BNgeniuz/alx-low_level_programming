#include "main.h"
#include <stdio.h>

/**
 * get_endianness - function that checks the endianness
 *
 * Return: 0 (sequential data)
 */

int get_endianness(void)
{
	unsigned int x = 1;
	char *a = (char *) &x;

	return (*a);
}
