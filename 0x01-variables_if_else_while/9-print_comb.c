#include <stdio.h>
/**
 * main - prints all possible combinations of single-digit numbers
 *
 * Return: 0 (Great)
 */
int main(void)
{
	int a;

	for (a = 0 ; a < 10 ; a++)
	{
		if (a == 9)
			putchar(a + '0');
		else
		putchar(a + '0');
		putchar(',');
		putchar(' ');
	}
	return (0);
}
