#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * op_add - funtion to addition
 * @a: first number
 * @b: second number
 *
 * Return: 0 (addition of arrays)
 */

int op_add(int a, int b)
{
	return (a + b);
}


/**
 * op_sub - function to less a number
 * @a: first number
 * @b: second number
 *
 * Return: 0 (substraction of arrays)
 */

int op_sub(int a, int b)
{
	return (a - b);
}


/**
 * op_mul - function to multiply
 * @a: first number
 * @b: second number
 *
 * Return: 0 (multiplication of arrays)
 */

int op_mul(int a, int b)
{
	return (a * b);
}


/**
 * op_div - function to division
 * @a: first number
 * @b: second number
 *
 * Return: 0 (dividing of arrays)
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}


/**
 * op_mod - function to modulo
 * @a: first number
 * @b: second number
 *
 * Return: 0 (modulation of arrays)
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
