#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - Write a function that prints a string in reverse
 * @s: str
 *
 * Return: 0 (str printing in reverse)
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
	return;
	}
	_print_rev_recursion(s + 1);
	putchar(*s);
}
