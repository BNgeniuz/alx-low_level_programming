#include "main.h"
#include <stdio.h>

int power_sqrt_recursion(int n, int y);

/**
 * _sqrt_recursion - a fnxtn that returns d natural sqrt of a num
 * @n: natural number
 *
 * Return: 0 (square root)
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (power_sqrt_recursion(n, 0));
}

/**
 * power_sqrt_recursion - a fnxtn that returns d natural sqrt of a num
 * @n: natural number
 * @y: for iteration
 * Return: 0 (square root)
 */

int power_sqrt_recursion(int n, int y)
{
	if (y * y > n)
		return (-1);
	if (y * y == n)
		return (y);
	return (power_sqrt_recursion(n, y + 1));
}
