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
	int i = 0, j = 0;
	unsigned int h = 0, total_len = 0;

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

	str = malloc(sizeof(char) * (total_len + 1));

	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			str[h++] = av[i][j];
		str[h++] = '\n';
	}

	str[total_len] = '\0';

	return (str);
}
