#include "main.h"

/**
 * _strchr - locate a character in a string
 * @s: the string to check
 * @c: the character to check for
 *
 * Return: If c is found, return pointer to its first occurence
 *		else, return null
 */

char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	while (s[i])
	{
		if (s[i] == c)
			break;

		i++;
	}

	if (s[i])
		return (s + i);

	return ('\0');
}
