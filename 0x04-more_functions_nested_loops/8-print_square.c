#include "main.h"
/**
 * print_square - print square
 * @size: square size
 *
 * Return: 0 (stillcoding)
 */
void print_square(int size)
{
	int q, p;

	p = 0;

	if (size < 1)
		_putchar('\n');

	while (p < size)
	{
		q = 0;
		while (q < size)
		{
			_putchar('#');
			q++;
		}
		_putchar('\n');
		p++;
	}
}
