#include "variadic_functions.h"

/**
 * sum_them_all -  function that returns the sum of all its parameters
 * @n: number of parameters
 *
 * Return: 0 (returns sums)
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int x = 0;
	int sum = 0;

	va_list num;

	if (n != 0)
	{
		va_start(num, n);

		while (x < n)
		{
			sum += va_arg(num, int);
			x++;
		}

		va_end(num);
		return (sum);
	}

	return (0);
}
