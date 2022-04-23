#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: the integer difference between the last compared bytes
 */

int _strcmp(char *s1, char *s2)
{
	int i, diff;

	for (i = 0; s1[i] && s2[i] & s1[i] == s2[i]; i++)
		;

	diff = s1[i] - s2[i];
	return (diff);
}
