#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - a function that searches a string for any of a set of bytes
 * @s: first occurrence of strings
 * @accept: number of bytes
 *
 * Return: 0 (Searching)
 */

char *_strpbrk(char *s, char *accept)
{
	int c, p;

	for (c = 0; s[c] != '\0'; c++)
	{
	for (p = 0; accept[p] != '\0'; p++)
	{
	if (s[c] == accept[p])
	return (s + c);
	}
	}

	return (NULL);
}
