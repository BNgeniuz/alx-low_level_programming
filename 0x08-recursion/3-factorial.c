#include "main.h"
#include <stdio.h>

/**
 * factorial - a function that returns the factorial of a given number
 * @n: n is lower than zero
 * fnxtn shld return neg-one to indicate an error
 *
 * Return: 0 (factorize)
 */

int factorial(int n)
{
	if (n < 0)
	return (-1);

	if (n <= 1)
	return (1);

	return (n * factorial(n - 1));
}
