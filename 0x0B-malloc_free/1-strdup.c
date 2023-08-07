#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - a function that returns a pointer
 * to a newly allocated space in memory
 * which contains a copy of the string given as a parameter
 * @str: memory of the string to duplicate
 * Return: 0 (string duplicates)
 */

char *_strdup(char *str)
{
	int x = 0;
int y = 1;
	char *z;

	if (str == NULL)
	return (NULL);

	while (str[y])
	{
	y++;
	}

	z = malloc((sizeof(char) * y) + 1);

	if (z == NULL)
	return (NULL);

	while (x < y)
	{
	z[x] = str[x];
	x++;
	}

	z[x] = '\0';
	return (z);
}
