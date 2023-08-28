#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
  * first - singly list
  *
  * Return: 0 (first write)
  */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
