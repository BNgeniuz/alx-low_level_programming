#include "main.h"
/**
 * print_last_digit - last digit of a num
 * @q: num to be printed
 * Return: (0) Value of last digit num
 */
int print_last_digit(int q)
{
	int i;

	i = q % 10;
	if (i < 0)
	{
		i = i * -1;
	}
	_putchar(i + '0');
	return (i);
}
