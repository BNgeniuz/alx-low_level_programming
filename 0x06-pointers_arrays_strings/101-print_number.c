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
	unsigned int p = n;

	if (n < 0)
	{
		putchar('-');
		p = -p;
	}
	if ((p / 10) > 0)
		print_number(p / 10);
			_putchar((p % 10) + '0');
}
