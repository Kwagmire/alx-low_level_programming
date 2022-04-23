#include "main.h"

/**
 * string_toupper - changes all lowercase characters in the string to uppercase
 * @m: the string
 *
 * Return: the resultant string
 */

char *string_toupper(char *m)
{
	int i = 0;
	
	while (m[i])
	{
		if (m[i] >= 'a' && m[i] <= 'z')
			m[i] -= 32;
	}

	return (m);
}
