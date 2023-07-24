#include "main.h"
#include <stdio.h>
/**
 * swap_int - fnxtn to swap two integer values
 * @x: first int
 * @y: second int
 *
 * Return: 0 (Swapping masters)
 */

void swap_int(int *x, int *y)
{
	int k;

	k = *x;
	*x = *y;
	*y = k;
}
