#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: first input
 * @n: first input
 *
 * Return: 0 (returnee)
 */

void reverse_array(int *a, int n)
{
	int x, y;

	for (x = 0; x < n--; x++)
	{
		y = a[x];
		a[x] = a[n];
		a[n] = y;
	}
}
