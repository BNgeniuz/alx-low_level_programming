#include <stdio.h>
/**
 * main - write a code to print the size of various types of computer
 * Return: 0 (Perfect)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float z;

	printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("size of an int: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("size of a long int: %lu bytes(s)\n", (unsigned long)sizeof(c));
	printf("size of a long long int: %lu bytes(s)\n", (unsigned long)sizeof(d));
	printf("size of a float: %lu bytes(s)\n", (unsigned long)sizeof(z));
	return (0);
}
