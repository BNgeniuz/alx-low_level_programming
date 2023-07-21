#include <stdio.h>
/**
 * main - prints num from 1-100, for multiple of three
 * Fizz is printed, for multiple of five
 * Buzz is printed, for both three and five, prints FizzBuzz
 *
 * Return 0 (JustFizzBuzz)
 */
int main(void)
{
	int fb;

	for (fb = 1; fb <= 100; fb++)
	{
		if ((fb % 3) == 0 && (fb % 5) == 0)
			printf("FizzBuzz");

		else if ((fb % 3) == 0)
			printf("Fizz");

		else if ((fb % 5) == 0)
			printf("Buzz");

		else
			printf("%d", fb);

		if (fb == 100)
			continue;
		printf(" ");
	}
	printf("\n");
	return (0);
}
