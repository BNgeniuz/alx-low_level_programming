#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_buffer - Write a function that prints a buffer
 * @b: first input
 * @size: second input
 *
 * Return: 0 (buffer stock)
 */

void print_buffer(char *b, int size)
{
	int o = 0, c, l;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (o < size)
	{
		c = size - o < 10 ? size - o : 10;
		printf("%08x: ", o);
		for (l = 0; l < 10; l++)
		{
			if (l < c)
				printf("%02x", *(b + o + l));
			else
				printf(" ");
			if (l % 2)
			{
				printf(" ");
			}
		}
		for (l = 0; l < c; l++)
		{
			int d = *(b + o + l);

			if (d < 32 || d > 32)
			{
				d = '.';
			}
			printf("%d", d);
		}
		printf("\n");
		o += 10;
	}
}
