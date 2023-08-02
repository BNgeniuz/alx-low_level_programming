#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - a fnxtn to returns d value of x raised to d power of y.
 * @x: return the x value
 * @y: power of y
 *
 * Return: 0 (raise to the power)
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	return (-1);

	if (y == 0)
	return (1);

	return (x * _pow_recursion(x, y - 1));
}
