#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints the minimum number of
 * coins to make change for an amount of money,if
 * the number of arguments passed to your program is
 * not exactly 1, print Error, followed by a new line, and return 1
 *
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 (cents is the amount of cents you need to give back)
 */

int main(int argc, char *argv[])
{
	int cents, psw = 0;

	if (argc != 2)
	{
	printf("Error\n");
	return (1);
	}

	cents = atoi(argv[1]);

	while (cents > 0)
	{
	psw++;
	if ((cents - 25) >= 0)
	{
	cents -= 25;
	continue;
	}
	if ((cents - 10) >= 0)
	{
	cents -= 10;
	continue;
	}
	if ((cents - 5) >= 0)
	{
	cents -= 5;
	continue;
	}
	if ((cents - 2) >= 0)
	{
	cents -= 2;
	continue;
	}
	cents--;
	}

	printf("%d\n", psw);

	return (0);
}
