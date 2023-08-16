#include "function_pointers.h"

/**
 * int_index - search for an integer
 * @cmp: pointer to compare values
 * @array: array element
 * @size: size of an array
 *
 * Return: 0 (array searching)
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int x = 0;

	if (size > 0)
	{
		if (array == NULL || cmp == NULL)
			return (-1);
		{
			while (x < size)
			{
				if (cmp(array[x]))
					return (x);

				x++;
			}
		}
	}

	return (-1);
}
