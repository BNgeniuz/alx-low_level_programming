#include <stdio.h>
/**
 * main - fibonacci sum up to 4mil
 *
 * Return: (0)
 */
int main(void)
{
	long int z, x = 1, y = 2, sum = 0, tsum = 0;

	for (z = 0; z < 49; z++)
	{
		if ((z % 2 == 0) && (y <= 4000000))
		{
			tsum = tsum + y;
		}
		sum = x + y;
		x = y;
		y = sum;
	}
	return (0);
}
