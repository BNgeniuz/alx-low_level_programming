#include "main.h"
/**
 * _isupper - prints upper case alphabets
 * @n: xter declaration
 *
 * Return: (0) for not true or (1) for true
 */
int _isupper(int n)
{
	if (n >= 'A' && n <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
