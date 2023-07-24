#include "main.h"
#include <stdio.h>
/**
 * print_rev - strings that prints in reverse
 * @r: xter of string
 *
 * Return: 0 (We are reversing)
 */

void print_rev(char *r)
{
	int q = 0;
	int p;

	while (*r != '\0')
	{
		q++;
		r++;
	}
	r--;
	for (p = q; p > 0; p--)
	{
		_putchar(*r);
		r--;
	}
	_putchar('\n');
}
