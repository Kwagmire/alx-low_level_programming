#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenate all the arguments of the program
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: a pointer to a new string containing all the args
 *         or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int i, h = 0, j = 0
	unsigned int total_len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		while (av[i][j])
		{
			total_len++;
			j++;
		}
		total_len++;
	}

	str = malloc(sizeof(char) * total_len);

	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++, h++)
			str[h] = av[i][j];
		str[h] = '\n';
		h++;
	}

	return (str);
}
