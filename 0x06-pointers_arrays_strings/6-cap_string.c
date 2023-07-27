#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * cap_string - function that capitalizes all words of a string
 * @q: capitalized string
 *
 * Return: 0 (lets cap it up)
 */

char *cap_string(char *q)
{
	int str = 0;

	while (q[str])
	{
		while (!(q[str] >= 'a' && q[str] <= 'z'))
			str++;
				if (q[str - 1] == ' ' ||
						q[str - 1] == '\t' ||
						q[str - 1] == '\n' ||
						q[str - 1] == ',' ||
						q[str - 1] == ';' ||
						q[str - 1] == '.' ||
						q[str - 1] == '!' ||
						q[str - 1] == '?' ||
						q[str - 1] == '"' ||
						q[str - 1] == '(' ||
						q[str - 1] == ')' ||
						q[str - 1] == '{' ||
						q[str - 1] == '}' ||
						str == 0)
					q[str] -= 32;
		str++;
	}
	return (q);
}
