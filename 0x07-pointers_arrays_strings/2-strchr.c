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
	int i;

	if (s == NULL)
		return (NULL);

	for (i = 0; s[i] != '\0'; i++)

	{
		if (s[i] == c)
			return (s + i);
	}
	return (NULL);
}
