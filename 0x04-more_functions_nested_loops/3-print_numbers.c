#include "main.h"
/**
 * print_numbers - from zero to nine
 *
 * Return: (1) for success, otherwise (0)
 */

void print_numbers(void);
{
	int k;

	for (k = 48; k < 58; ++)
	{
		_putchar(k);
		_putchar('\n');
	}
}
