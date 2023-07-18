#include "main.h"
/**
 * print_sign - sign of a number
 * @i: number to be printed
 * Return: 1 for positive number, -1 for negative or 0 anything else
 */
int print_sign(int i)
{
	if (i > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (i < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
