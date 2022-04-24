#include "main.h"

/**
 * cap_string - capitalize all words of a string
 * @a: the string
 *
 * Return: the pointer to the resultant string
 */

char *cap_string(char *a)
{
	while (*a)
	{
		if (*a == ' ' || *a == '\t' || *a == '\n' || *a == ',' || *a == '"')
		{
			if (*(a + 1) >= 'a' && *(a + 1) <= 'z')
				*(a + 1) = *(a + 1) - 32;
		}
		else if (*a == ';' || *a == '.' || *a == '!' || *a == '?')
		{
			if (*(a + 1) >= 'a' && *(a + 1) <= 'z')
				*(a + 1) = *(a + 1) - 32;
		}
		else if (*a == '(' || *a == ')' || *a == '{' || *a == '}')
		{
			if (*(a + 1) >= 'a' && *(a + 1) <= 'z')
				*(a + 1) = *(a + 1) - 32;
		}

		a++;
	}
	
	return (a);
}
