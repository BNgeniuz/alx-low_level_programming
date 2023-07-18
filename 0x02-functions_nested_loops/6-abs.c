#include "main.h"
/**
 * _abs - prints absolute value of an integer
 * @c: number to be printed
 * Return: (0) Absolute value of number or zero
 */
int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;
		return (abs_val);
	}
	return (c);
}
