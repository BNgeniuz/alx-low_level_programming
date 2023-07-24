#include "main.h"
#include <stdio.h>
/**
 * puts2 - prints every other xter of a string, starting with the first xter
 * @str: string xter
 *
 * Return: print
 */

void puts2(char *str)
{
	int u = 0;
	int v = 0;
	char *w = str;
	int x;

	while (*w != '\0')
	{
		w++;
		u++;
	}
	v = u - 1;
	for (x = 0; x <= v; x++)
	{
		if (x % 2 == 0)
		{
			_putchar(str[x]);
		}
	}
	_putchar('\n');
}
