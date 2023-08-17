#include "function_pointers.h"
#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that performs simple operations
 * @argc: argument needed for the program
 * @argv: pointer to the function of array
 *
 * Return: 0 (operation simplify)
 */

int main(int argc, char *argv[])
{
	int (*oprxn)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	oprxn = get_op_func(argv[2]);

	if (!oprxn)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", oprxn(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
