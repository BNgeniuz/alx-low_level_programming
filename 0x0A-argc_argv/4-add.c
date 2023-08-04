#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  * main - a program that adds positive numbers
  * @argc: argument count
  * @argv: argument vector
  *
  * Return: 0 (sum of postive num)
  */

int main(int argc, char *argv[])
{
	int n;
	unsigned int x, sum = 0;
	char *y;

	if (argc > 1)
	{
	for (n = 1; n < argc; n++)
	{
	y = argv[n];

	for (x = 0; x < strlen(y); x++)
	{
	if (y[x] < 48 || y[x] > 57)
	{
	printf("Error\n");
	return (1);
	}
	}

	sum += atoi(y);
	y++;
	}

	printf("%d\n", sum);
	}
	else
	{
	printf("0\n");
	}

	return (0);
}
