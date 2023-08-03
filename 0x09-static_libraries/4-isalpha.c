#include "main.h"
/**
 * _isalpha - prints alphabetic xters
 * @d: Character to be printed
 * Return: 1 for alphabetic xter or 0 for anything else
 */
int _isalpha(int d)
{
	if ((d >= 65 && d <= 97) || (d >= 97 && d <= 122))
	{
		return (1);
	}
	return (0);
}
