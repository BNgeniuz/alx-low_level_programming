#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - natural num from nth to 98
 * @i: Entry point
 * Return: (0) natural numbers
 */
void print_to_98(int i)
{
	if (i <= 98)
	{
		for (; i <= 98; i++)
		{
			if (i == 98)
			{
				printf("%d", i);
				printf("\n");
				break;
			}
				else
				{
					printf("%d, ", i);
				}
		}
	}
	else
	{
		for (; i >= 98; i--)
		{
			if (i == 98)
			{
				printf("%d", i);
				printf("\n");
				break;
			}
			else
			{
				printf("%d, ", i);
			}
		}
	}
}
