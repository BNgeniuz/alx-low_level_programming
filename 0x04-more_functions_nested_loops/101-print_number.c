#include "main.h"
/**
 * print_number - print integer num
 * @n: num to be printed
 */

void print_number(int n)
{
	unsigned int tbt = n;

	if (n < 0)
	{
		_putchar('-');
		tbt = -tbt;
	}
	if ((tbt / 10) > 0)
		print_number(tbt / 10);

	_putchar((tbt % 10) + '0');
}
