#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * set_string - a function that sets the value of a pointer to a char
 * @s: value to be set
 * @to: string input
 *
 * Return: 0 (pointer to a char)
 */
void set_string(char **s, char *to)
{
	*s = to;
}
