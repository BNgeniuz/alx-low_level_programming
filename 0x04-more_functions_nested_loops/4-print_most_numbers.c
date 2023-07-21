#include "main.h"
/**
 * print_most_numbers - print nums btn zero and nine except two and four
 *
 * Return: 0 (Crazy c coding)
 */
void print_most_numbers(void)
{
	int k;

	for (k = 48; k < 58; k++)
	{
		if (k != 50)
		{
			if (k != 52)
			{
				_putchar(k);
			}
			_putchar('\n');
		}
	}
}
