#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * is_digit - a program that multiplies two positive numbers
 * if a non-digit is found, 1 otherwise
 * @x: string to be multiply
 *
 * Return: 0 (str multiplication)
 */

int is_digit(char *x)
{
	int y = 0;

	while (x[y])
	{
	if (x[y] < '0' || x[y] > '9')
	return (0);
	y++;
	}
	return (1);
}

/**
 * _strlen - returns the end of a string
 * @x: string to multiply
 *
 * Return: 0 (end of the str)
 */

int _strlen(char *x)
{
	int y = 0;

	while (x[y] != '\0')
	{
	y++;
	}
	return (y);
}


/**
 * errors - manage errors
 */

void errors(void)
{
	printf("Error\n");
	exit(98);
}


/**
 * main - multiplies 2 pos num
 * @argc: arg counted
 * @argv: arg vectored
 *
 * Return: always 0 (Positive)
 */

int main(int argc, char *argv[])
{
	char *x1, *x2;
	int lst1, lst2, lst, y, move, dig1, dig2, *answer, z = 0;

	x1 = argv[1], x2 = argv[2];
	if (argc != 3 || !is_digit(x1) || !is_digit(x2))
	errors();
	lst1 = _strlen(x1);
	lst2 = _strlen(x2);
	lst = lst1 + lst2 + 1;
	answer = malloc(sizeof(int) * lst);
	if (!answer)
	return (1);
	for (y = 0; y <= lst1 + lst2; y++)
	answer[y] = 0;
	for (lst1 = lst1 - 1; lst1 >= 0; lst1--)
	{
	dig1 = x1[lst1] - '0';
	move = 0;
	for (lst2 = _strlen(x2) - 1; lst2 >= 0; lst2--)
	{
	dig2 = x2[lst2] - '0';
	move += answer[lst1 + lst2 + 1] + (dig1 * dig2);
	answer[lst1 + lst2 + 1] = move % 10;
	move /= 10;
	}
	if (move > 0)
	answer[lst1 + lst2 + 1] += move;
	}
	for (y = 0; y < lst - 1; y++)
	{
	if (answer[y])
	z = 1;
	if (z)
	_putchar(answer[y] + '0');
	}
	if (!z)
	_putchar('0');
	_putchar('\n');
	free(answer);
	return (0);
}
