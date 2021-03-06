#include "main.h"

/**
 * cap_string - capitalize all words of a string
 * @a: the string
 *
 * Return: the pointer to the resultant string
 */

char *cap_string(char *a)
{
	int i = 0;

	while (a[i])
	{
		if (i == 0 && a[i] >= 'a' && a[i] <= 'z')
			a[i] -= 32;

		else if (a[i] == ' ' || a[i] == '\t' || a[i] == '\n' || a[i] == ',')
		{
			if (a[i + 1] >= 'a' && a[i + 1] <= 'z')
				a[i + 1] -= 32;
		}
		else if (a[i] == ';' || a[i] == '.' || a[i] == '!' || a[i] == '?')
		{
			if (a[i + 1] >= 'a' && a[i + 1] <= 'z')
				a[i + 1] -= 32;
		}
		else if (a[i] == '(' || a[i] == ')' || a[i] == '{' || a[i] == '}')
		{
			if (a[i + 1] >= 'a' && a[i + 1] <= 'z')
				a[i + 1] -= 32;
		}
		else if (a[i] == '"')
		{
			if (a[i + 1] >= 'a' && a[i + 1] <= 'z')
				a[i + 1] -= 32;
		}

		i++;
	}

	return (a);
}
