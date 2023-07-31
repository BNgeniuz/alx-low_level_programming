#include "main.h"
#include <stdio.h>

/**
 * _strspn -  a function that gets the length of a prefix substring
 * @s: string return
 * @accept: destination string
 *
 * Return: 0 (length of substrings)
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, c, size, index;

	size = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
	index = 0;

	for (c = 0; accept[c] != '\0'; c++)
	{
	if (accept[c] == s[i])
	{
	size++;
	index = 1;
	}
	}

	if (index == 0)
	return (size);
	}

	return (size);
}
