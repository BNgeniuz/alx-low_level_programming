#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * infinite_add - a function that adds two numbers
 * @n1: first xter
 * @n2: sec xter
 * @r: third xter
 * @size_r: integer size
 *
 * Return: 0 (infinite)
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int ov = 0, x = 0, y = 0, gits = 0;
	int xl1 = 0, xl2 = 0, tt = 0;

	while (*(n1 + x) != '0')
		x++;
	while (*(n2 + y) != '0')
		y++;

	x--;
	y--;
	if (y >= size_r || x >= size_r)
		return (0);
	while (y >= 0 || x >= 0 || ov == 1)
	{
		if (x < 0)
			xl1 = 0;
		else
			xl1 = *(n1 + x) - '0';
		if (y < 0)
			xl2 = 0;
		else
			xl2 = *(n2 + y) - '0';
		tt = xl1 + xl2 + ov;
		if (tt >= 10)
			ov = 1;
		else
			ov = 0;
		if (gits >= (size_r - 1))
			return (0);
		*(r + gits) = (tt % 10) + '0';
		gits++;
		y--;
		x--;
	}
	if (gits == size_r)
		return (0);
	*(r + gits) = '0';
	rev_string(r);
	return (r);
}
