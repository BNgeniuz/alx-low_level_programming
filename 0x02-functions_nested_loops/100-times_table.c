#include "main.h"
/**
 * print_times_table - nth time table starting with 0
 * @n: deduce parameter
 * Return: (0) nth times table
 */
void print_times_table(int n)
{
	int e, k, v;

	if (n <= 15 && n >= 0)
		for (e = 0; e <= n; e++)
		{
			_putchar('0');
			for (k = 1; k <= n; k++)
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
				{
					_putchar((v / 10) + '0');
				}
				_putchar((v % 10) + '0');
			}
			_putchar('\n');
		}
}
