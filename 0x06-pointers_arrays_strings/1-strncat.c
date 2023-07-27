#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strncat - string to be link two functions
 * @dest: first string to be link
 * @src: second string to be link
 * @n: number of bytes to be link
 *
 * Return: void
 */

char *_strncat(char *dest, char *src, int n)
{
	int x = 0;
	int y = 0;

	while (dest[x++])
		y++;
	for (x = 0; src[x] && x < n; x++)
		dest[y] = src[x];
	return (dest);
}
