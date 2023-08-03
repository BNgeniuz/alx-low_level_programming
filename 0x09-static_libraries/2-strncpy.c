#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strncpy - function that copies a string
 * @dest: first string to be copy
 * @src: second string to be copy
 * @n: number of string
 *
 * Return: 0 (copy cat)
 */

char *_strncpy(char *dest, char *src, int n)
{
	int m = 0;

	while (m < n && src[m] != '\0')
	{
		dest[m] = src[m];
		m++;
	}
	while (m < n)
	{
		dest[m] = '\0';
		m++;
	}
	return (dest);
}
