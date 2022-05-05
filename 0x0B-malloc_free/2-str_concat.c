#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenate two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to the resultant string
 * created by malloc
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i, j, s1_len = 0, total_len;

	if (s1 == NULL)
		s1_len += 0;
	if (s2 == NULL)
	{
		total_len = 0 + s1_len;
	}
	else
	{
		for (i = 0; s1[i]; i++)
			s1_len++;

		total_len = s1_len;

		for (i = 0; s2[i]; i++)
		total_len++;
	}

	concat = malloc((total_len + 1) * sizeof(char));

	if (concat == NULL)
		return (NULL);
	for (i = 0; i < s1_len; i++)
		concat[i] = s1[i];
	j = 0;
	for (; i < total_len; i++)
	{
		concat[i] = s2[j];
		j++;
	}
	concat[i] = '\0';
	return (concat);
}
