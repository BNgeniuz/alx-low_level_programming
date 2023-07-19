#include <stdio.h>
/**
 * main - fibonacci sum up to 4mil
 *
 * Return: (0)
 */
int main(void)
{
	int i;
	unsigned long int x, y, sum, tsum;

	x = 1;
	y = 2;
	tsum = 0;

	for (i = 1; i < 33; i++)
	{
		if (x < 4000000 && (x % 2) == 0)
		{
			tsum = tsum + x;
		}
		sum = x + y;
		x = y;
		y = sum;
	}
	printf("%ld\n", tsum);

	return (0);
}
