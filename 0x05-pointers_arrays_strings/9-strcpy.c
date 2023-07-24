#include "main.h"
#include <stdio.h>
/**
 * char *_strcpy - function that copies the string pointed
 * @src: copy from
 * @dest: copy to
 *
 * Return: 0 (desmond for src)
 */

char *_strcpy(char *dest, char *src)
{
	int q = 0;
	int p = 0;

	while (*(src + q) != '\0')
	{
		q++;
	}
	for ( ; p < q ; p++)
	{
		dest[p] = src[p];
	}
	dest[q] = '\0';
	return (dest);
}
