#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - returns the length of a string
 * @s: string
 * Return: 0 (string length)
 */

int _strlen_recursion(char *s)

{
	if (*s == '\0')
	return (0);
	else
	return (1 + _strlen_recursion(s + 1));
}



/**
 * checker - check each xter of the string
 * @s: string
 * @x1: first iterator.
 * @x2: second iterator.
 * Return: .
 */

int checker(char *s, int x1, int x2)
{
	if (*(s + x1) == *(s + x2))
	{
	if (x1 == x2 || x1 == x2 + 1)
	return (1);
	return (0 + checker(s, x1 + 1, x2 - 1));
	}
	return (0);
}



/**
 * is_palindrome - finds if a string is a palindrome
 * if s is a palindrome return 1
 * if not return 0
 * @s: string.
 * Return: 0 (palindrome)
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
	return (1);
	return (checker(s, 0, _strlen_recursion(s) - 1));
}
