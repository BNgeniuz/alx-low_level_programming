#include "main.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - code generates random valid passwords for the program 101-crackme
 *
 * Return: 0 (crackmepswd)
 */

int main(void)
{
	int pwsd[100];
	int a, b, c;

	b = 0;

	srand(time(NULL));

	for (a = 0; a < 100; a++)
	{
		pwsd[a] = rand() % 70;
		b += (pwsd[a] + '0');
		putchar(pwsd[a] + '0');
		if ((2772 - b) - '0' < 78)
		{
			c = 2772 - b - '0';
			b += c;
			putchar(c + '0');
			break;
		}
	}
	return (0);
}
