#include "function_pointers.h"

/**
 * print_name - funtion to print name
 * @f: pointer
 * @name: string name
 *
 * Return: 0 (what is my name)
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
