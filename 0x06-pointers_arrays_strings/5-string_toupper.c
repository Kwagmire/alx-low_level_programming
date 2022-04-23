#include "main.h"

/**
 * string_toupper - changes all lowercase characters in the string to uppercase
 * @m: the string
 *
 * Return: the resultant string
 */

char *string_toupper(char *m)
{
	int i;
	
	for (i = 0; m[i] != '\0'; i++)
	{
		if (m[i] >= 'a' && m[i] <= 'z')
			m[i] = m[i] - 32;
	}

	return (m);
}
