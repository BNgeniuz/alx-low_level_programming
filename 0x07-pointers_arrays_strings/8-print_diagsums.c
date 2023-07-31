#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_diagsums -  a function that prints the sum
 * of the two diagonals of a square matrix of integers
 * @a: first sum of diagonal square matrix of integers
 * @size: size of the diagonal maatrix integers
 *
 * Return: 0 (diagonals)
 */

void print_diagsums(int *a, int size)
	{
	int x, y, sum1 = 0, sum2 = 0;

	for (x = 0; x <= (size * size); x = x + size + 1)
	sum1 = sum1 + a[x];

	for (y = size - 1; y <= (size * size) - size; y = y + size - 1)
	sum2 = sum2 + a[y];
	printf("%d, %d\n", sum1, sum2);
}
