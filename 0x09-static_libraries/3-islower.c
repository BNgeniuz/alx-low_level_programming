#include "main.h"
/**
 * _islower - print lower characters only
 * @d: character to be check
 * Return: 1 for lowercase character or 0 for anything else
 */
int _islower(int d)
{
	if (d >= 97 && d <= 122)
	{
		return (1);
	}
	return (0);
}
