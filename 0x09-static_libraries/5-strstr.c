#include "main.h"
#include <stdio.h>

/**
 * _strstr -  a function that locates a substring
 * @haystack: source string
 * @needle: destination string
 *
 * Return: 0 (substringing)
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
	char *abc = haystack;
	char *xyz = needle;

	while (*abc == *xyz && *xyz != '\0')
	{
	abc++;
	xyz++;
	}

	if (*xyz == '\0')
	return (haystack);
	}

	return (NULL);
}
