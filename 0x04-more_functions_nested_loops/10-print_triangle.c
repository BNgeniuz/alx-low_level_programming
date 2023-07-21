#include "main.h"
/**
 * print_triangle - use xter harshtag to print triangle
 * @size: triangle size
 *
 * return 0 (gracehasfoundme)
 */

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
	int harsh, tag;

	for (harsh = 1; harsh <= size; harsh++)
	{
	for (tag = harsh; tag < size; tag++)
	{
	_putchar(' ');
	}
	for (tag = 1; tag <= harsh; tag++)
	{
	_putchar('#');
	}
	_putchar('\n');
	}
	}
}
