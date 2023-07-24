#include "main.h"
#include <stdio.h>
/**
 * rev_string - Write a function that reverses a string
 * @r: str xter fro reversing
 *
 * Return: 0 (lets do it in reverse)
 */

void rev_string(char *r)
{
	char reverse = r[0];
	int q = 0;
	int p;

	while (r[q] != '\0')
		q++;
	for (p = 0; p < q; p++)
	{
		q--;
		reverse = r[p];
		r[p] = r[q];
		r[q] = reverse;
	}
}
