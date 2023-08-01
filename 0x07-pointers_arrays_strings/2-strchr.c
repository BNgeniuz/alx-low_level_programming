#include "main.h"
#include <stdio.h>

/**
 * _strchr - a function that locates a character in a string
 * @s: string xter occurrence
 * @c: pointer first occurrence
 *
 * Return: 0 (locating xter in strings)
 */

char *_strchr(char *s, char c)
{
	int p;

	for (p = 0; s[p] >= '\0'; p++)

	{
	if (s[p] == c)
	return (s + p);
	}
	return (NULL);
}
