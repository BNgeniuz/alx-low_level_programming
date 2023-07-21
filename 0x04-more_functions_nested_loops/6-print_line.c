#include "main.h"
/**
 * print_line - fxntn to print straight line
 * @n: number xter to be printed
 * Return: 0 (sooner)
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int m;

		for (m = 1; m <= n; m++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
