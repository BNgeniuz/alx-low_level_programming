#include "main.h"
#include <stdio.h>

/**
 * _strlen - return the length os a string
 * @z: xter of str
 *
 * Return: 0 (return back to root)
 */

int _strlen(char *z)
{
	int m = 0;

	while (*z != '\0')
	{
		m++;
		z++;
	}
	return (m);
}
