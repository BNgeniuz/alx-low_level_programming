#include "main.h"
/**
 * print_triangle - use xter harshtag to print triangle
 * @size: triangle size
 *
 * return 0 (gracehasfoundme)
 */

void print_triangle(int size)
{
	int harsh, tag;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (harsh = 1; harsh <= size; harsh++)
		{
			for (tag = size - harsh; tag > 0; tag++)
				_putchar(' ');
			{
			if ((harsh + tag) <= size)
				_putchar(' ');
			else
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
