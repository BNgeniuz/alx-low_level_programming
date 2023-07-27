#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * rot13 - function that encodes a string using rot13
 * @pm: string to be encoded
 *
 * Return: 0 (rootrock)
 */

char *rot13(char *pm)
{
	int m, n;
	char dr1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char dr2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (m = 0; pm[m] != '\0'; m++)
	{
		for (n = 0; n < 52; n++)
		{
			if (pm[m] == dr1[n])
			{
				pm[m] = dr2[n];
				break;
			}
		}
	}
	return (pm);
}
