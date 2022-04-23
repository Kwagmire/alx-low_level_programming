#include "main.h"

/**
 * string_toupper - changes all lowercase characters in the string to uppercase
 * @m: the string
 *
 * Return: the resultant string
 */

char *string_toupper(char *m)
{
	while (*m != '\0')
	{
		if (*m >= 'a' && *m <= 'z')
		{
			*m -= 32;
		}

		m++;
	}
}
