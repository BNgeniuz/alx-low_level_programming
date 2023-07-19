#include "main.h"
/**
 * print_times_table - nth time table starting with 0
 * @i: deduce parameter
 * Return: (0) nth times table
 */
void print_times_table(int i)
{
	int e, k, v;

	if (i <= 15 && i >= 0)
	for (e = 0; e <= i; e++)
	{
		_putchar('0');
		for (k = 1; k <= i; k++)
		{
			_putchar(',');
			_putchar(' ');
			v = e * k;
			if (v <= 99)
				_putchar(' ');
			if (v <= 9)
				_putchar(' ');
			if (v >= 100)
			{
				_putchar((v / 100) + '0');
				_putchar(((v / 10) % 10) + '0');
			}
			else if (v <= 99 && v >= 10)
				_putchar((v / 10) + '0');
		}
		_putchar('\n');
	}
}
