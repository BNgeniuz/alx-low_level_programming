#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_numbers - function that prints numbers
 * @separator: strings between the number
 * @n: number of integer paased to the function
 *
 * Return: 0 (number printing)
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int x = 0;

	if (n > 0)
	{
		va_start(args, n);

		while (x < n)
		{
			printf("%d", va_arg(args, int));

			if (x != x - 1 || separator != NULL)
				printf("%s", separator);

			x++;
		}
		va_end(args);
	}
	printf("\n");
}
