#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - generate a key for crackme5
 * @argc: num args passed
 * @argv: args passed to main
 *
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	unsigned int l, p;
	size_t brth, plus;
	char *i = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	char b[7] = "      ";

	if (argc != 2)
	{
		printf("Correct usage: ./keygen5 username\n");
		return (1);
	}
	brth = strlen(argv[1]);
	b[0] = i[(len ^ 59) & 63];
	for (l = 0, plus = 0; l < brth; l++)
		plus += argv[1][l];
	b[1] = i[(plus ^ 79) & 63];
	for (l = 0, p = 1; l < brth; l++)
		p *= argv[1][l];
	b[2] = i[(p ^ 85) & 63];
	for (p = argv[1][0], l = 0; l < brth; l++)
		if ((char)p <= argv[1][l])
			p = argv[1][l];
	srand(p ^ 14);
	b[3] = i[rand() & 63];
	for (p = 0, l = 0; l < brth; l++)
		p += argv[1][l] * argv[1][l];
	b[4] = i[(p ^ 239) & 63];
	for (p = 0, l = 0; (char)l < argv[1][0]; l++)
		p = rand();
	b[5] = i[(p ^ 229) & 63];
	printf("%s\n", b);
	return (0);
}
