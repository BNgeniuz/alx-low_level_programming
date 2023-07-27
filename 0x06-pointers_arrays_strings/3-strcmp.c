#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strcmp -  function that compares two strings.
 * @s1: first value to input
 * @s2: second input
 *
 * Return: 0 (comparism)
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
