#include "main.h"
#include <stdio.h>

int _sqrt(int n, int y);

/**
 * _sqrt_recursion - a fnxtn that returns d natural sqrt of a num
 * @n: natural number
 *@y: for iteration
 * Return: 0 (square root)
 */

int _sqrt(int n, int y)
{
	int sqrt = y * y;

	if (sqrt > n)
		return (-1);

	if (sqrt == n)
		return (y);
	return (_sqrt(n, y + 1));
}

/**
 * _sqrt_recursion - a fnxtn that returns d natural sqrt of a num
 * @n: natural number
 *
 * Return: 0 (square root)
 */

int _sqrt_recursion(int n)
{

	return (_sqrt(n, 1));
}
