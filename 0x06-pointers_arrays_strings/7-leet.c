#include "main.h"

/**
 * leet - encode a string into 1337
 * @str: the string to be manipulated
 *
 * Return: the resultant string
 */

char *leet(char *str)
{
	int i = 0, j;
	char leet[8] = {'o', 'l', '[', 'e', 'a', '[', '[', 't'};

	while (str[i])
	{
		for (j = 0; j <= 7; j++)
		{
			if (str[i] != '[' && (str[i] == leet[j] || str[i] + 32 == leet[j]))
				str[i] = j + '0';
		}

		i++;
	}

	return (str);
}
