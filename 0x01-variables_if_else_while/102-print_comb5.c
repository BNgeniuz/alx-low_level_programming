#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints all possible combinations of two two-digit numbers
 *
 * Return: 0 (Good)
 */
int main(void)
{
	int k, l;

	for (k = 0; l <= 98; k++)
	{
		for (l = k + 1; l <= 99; l++)
		{
			putchar((k / 10) + '0');
			putchar((k % 10) + '0');
			putchar(' ');
			putchar((l / 10) + '0');
			putchar((l % 10) + '0');
			if (k == 98 && l == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
