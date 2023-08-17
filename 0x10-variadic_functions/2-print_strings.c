#include "variadic_functions.h"
#include <stdarg.h>
#include  <stdio.h>
#include <stdlib.h>

/**
 * print_strings - function that prints strings
 * @n: number of string to integer
 * @separator: string to be printed btn the strings
 *
 * Return: 0 (string separation)
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list num;
	char *string;

	unsigned int x = 0;

	if (n > 0)
	{
		va_start(num, n);

		while (x < n)
		{
			string = va_arg(num, char *);
			if (string == NULL)
				printf("%s", "(nil)");
			else
				printf("%s", string);

			if (x != n - 1 && separator != NULL)
				printf("%s", separator);

			x++;
		}

		va_end(num);
	}

	printf("\n");
}
