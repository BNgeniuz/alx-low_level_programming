#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_all - function that prints anything
 * @format: list of types of arguments passed to the function
 *
 * Return: 0 (anything)
 */

void print_all(const char * const format, ...)
{
	va_list args;
	f_dt form_types[] = {
		{ "c", print_a_char },
		{ "i", print_a_integer },
		{ "f", print_a_float },
		{ "s", print_a_char_ptr }
	};
	unsigned int i = 0;
	unsigned int j = 0;
	char *separator = "";

	va_start(args, format);

	while (format != NULL && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == *form_types[j].identifier)
			{
				form_types[j].f(separator, args);
				separator = ", ";
			}
			j++;
		}
		i++;
	}

	va_end(args);
	printf("\n");
}


/**
 * print_a_char - Prints a xter of char type
 * @separator: xter to separate
 * @args: variadic arguments list
 *
 * Return: 0 (print character type)
 */

void print_a_char(char *separator, va_list args)
{
	printf("%s%c", separator, va_arg(args, int));
}


/**
 * print_a_integer - Prints an integer xter type
 * @separator: xter to separate
 * @args: variadic arguments list
 *
 * Return: 0 (integer printing)
 */

void print_a_integer(char *separator, va_list args)
{
	printf("%s%i", separator, va_arg(args, int));
}


/**
 * print_a_float - Prints a float xter type
 * @separator: xter to separate
 * @args: variadic arguments list
 *
 * Return: 0 (float printing)
 */

void print_a_float(char *separator, va_list args)
{
	printf("%s%f", separator, va_arg(args, double));
}


/**
 * print_a_char_ptr - Prints the content of pointer to char type
 * @separator: xter to separate
 * @args: variadic arguments list
 *
 * Return: 0 (pointer to char)
 */

void print_a_char_ptr(char *separator, va_list args)
{
	char *arg = va_arg(args, char *);

	if (arg == NULL)
	{
		printf("%s%s", separator, "(nil)");
		return;
	}

	printf("%s%s", separator, arg);
}
