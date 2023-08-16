#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given
 * as a parameter on each element of an array
 * @action: pointer to function
 * @size: size of array
 * @array: an array
 *
 * Return: 0 (iteration of arrays)
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x = 0;

	if (array == NULL || action == NULL)
		return;
	{
		while (x < size)
		{
			action(array[x]);
			x++;
		}
	}
}
