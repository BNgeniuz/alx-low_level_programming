#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (Perfect)
 */
int main(void)
{
	char j;

	for (j = 'a' ; j <= 'z' ; j++)
		putchar(j);
	for (j = 'A' ; j <= 'Z' ; j++)
		putchar(j);
	putchar('\n');
	return (0);
}
