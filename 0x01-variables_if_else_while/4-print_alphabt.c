#include <stdio.h>
/**
 * main - print all letters except q e
 *
 * Return: 0 (Good)
 */
int main(void)
{
	char k;

	for (k = 'a' ; k <= 'z' ; k++)
		if (k != 'q' && k != 'e')
			putchar(k);
	putchar('\n');
	return (0);
}
