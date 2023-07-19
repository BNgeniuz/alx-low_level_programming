#include <stdio.h>
/**
 * main - Entry point, fibonacci
 * Return: (0) prints fibonacci num
 */
int main(void)
{
	int q = 0;
	unsigned long int x = 0, y = 1, z = 0;

	while (q < 99)
	{
		z = x + y;
		x = y;
		y = z;
		printf("%lu", z);

		if (q < 97)
			printf(", ");
		q++;
	}
	putchar('\n');
	return (0);
}
