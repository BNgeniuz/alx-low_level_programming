#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * leet - function that encodes a string into 1337
 * @q: xter to be encoded
 *
 * Return: 0 (coded location)
 */

char *leet(char *q)
{
	int x, y;
	char z1[] = "aAeEoOtTlL";
	char z2[] = "4433007711";

	for (x = 0; q[x] != '\0'; x++)
	{
		for (y = 0; y < 10; y++)
		{
			if (q[x] == z1[y])
			{
				q[x] = z2[y];
			}
		}
	}
	return (q);
}
