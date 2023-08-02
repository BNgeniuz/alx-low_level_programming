#include "main.h"
#include <stdio.h>

int pp_prime(int n, int y);

/**
 * is_prime_number - a function that returns 1
 * if the input integer is a prime number
 * otherwise return 0
 * @n: number to evaluate
 *
 * Return: 0 (prime num)
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (pp_prime(n, n - 1));
}

/**
 * pp_prime - prime recursively, print 1 for prime, otherwise 0
 * @n: number to evaluate
 * @y: iterator
 *
 * Return: 0 (prime num)
 */
int pp_prime(int n, int y)
{
	if (y == 1)
		return (1);
	if (n % y == 0 && y > 0)
		return (0);
	return (pp_prime(n, y - 1));
}

