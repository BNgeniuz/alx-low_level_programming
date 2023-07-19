#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Return: (0) natural numbers
 */
int main(void)
{
	int z, sum = 0;

	for (z = 0; z < 1024; z++)
	{
		if ((z % 5 == 0) || (z % 3 == 0))
			sum += z;
	}
	printf("%d\n", sum);
	return (0);
}
