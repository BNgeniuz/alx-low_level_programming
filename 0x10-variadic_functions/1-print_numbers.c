#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers - function that prints numbers
 * @n: number of integer to passed to the function
 * @separator: string between the line to print
 *
 * Return:
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int x = 0;

	if (n > 0)
	{
		va_start(num, n);

		while (x < n)
		{
			printf("%d", va_arg(num, int));

			if (x != n - 1 && separator != NULL)
				printf("%s", separator);

			x++;
		}
		va_end(num);
	}
	printf("\n");
}
