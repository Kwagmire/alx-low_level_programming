#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the string
 *
 */

void rev_string(char *s)
{
	int len = 0, i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}
	char reverse[len];

	for (; len >= 1; len--)
	{
		reverse[i - (len - 1)] = s[len - 1];
	}

	for (j = 0; j < i; j++)
	{
		s[j] = reverse[j];
	}
}
