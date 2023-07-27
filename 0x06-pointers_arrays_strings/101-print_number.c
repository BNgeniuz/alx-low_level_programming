#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_number - a function that prints an integer
 * @n: number to input
 * Return: 0 (printeger)
 */

void print_number(int n)
{
	unsigned int p;

	p = n;
	if (n < 0)
	{
		_putchar('-');
		p = -n;
	}
	if (p / 10 != 0)
	{
		print_number(p / 10);
	}
	_putchar((p % 10) + '0');
}
