#include "main.h"
/**
 * _isdigit - check numbers btn 0 and 9
 * @n: denotes xter
 *
 * Return: (1) if it is a digit, otherwise (0)
 */
int _isdigit(int n)
{
	if (n >= 0 && n <= 9)
	{
		return (1);
	}
	else
		return (0);
}
