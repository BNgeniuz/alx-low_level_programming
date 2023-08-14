#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the name of the file it was compiled from
 *
 * Return: 0 (preproccessor file)
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
