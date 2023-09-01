#include "main.h"
#include <stdio.h>

/**
 * print_binary - unction that prints the binary representation of a number
 *
 * @n: binary to input
 *
 * Return: 0 (binary prints)
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
