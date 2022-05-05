#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - create a duplicate of a string with malloc
 * @str: the string
 *
 * Return: pointer to the duplicate string
 * or NULL if str is NULL
 */

char *_strdup(char *str)
{
	int i = 0, len = 0;
	char *dupl;

	if (str == NULL)
		return (NULL);

	while (str[i])
		len++;

	dup1 = malloc((len + 1) * sizeof(char));

	for (i = 0; i < len; i++)
		dup1[i] = str[i];

	dup[i] = '\0';
}
