#include "main.h"
#include <stdio.h>
/**
 * _atoi - string to int convertion
 * @s: Entry pointer for convertion
 *
 * Return: 0 (Atoi Ahwoi)
 */

int _atoi(char *s)
{
	int a = 0;
	unsigned int ab = 0;
	int bc = 1;
	int cd = 0;

	while (s[a])
	{
		if (s[a] == 45)
		{
			bc *= -1;
		}
		while (s[a] >= 48 && s[a] <= 57)
		{
			cd = 1;
			ab = (ab * 10) + (s[a] - '0');
			a++;
		}
		if (cd == 1)
		{
			break;
		}
		a++;
	}
	ab *= bc;
	return (ab);
}
