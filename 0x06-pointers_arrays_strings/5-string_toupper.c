#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @q: - strings input
 *
 * Return: 0 (we are good on the low)
 */

char *string_toupper(char *q)
{
	int str = 0;

	while (q[str])
	{
	if (q[str] >= 'a' && q[str] <= 'z')
	q[str] -= 32;
	str++;
	}
	return (q);
}
