#include "main.h"

/**
 * rot13 - encode string using rot13
 * @str: the string to be manipulated
 *
 * Return: resultant string
 */

char *rot13(char *str)
{
	int i = 0;

	while (str[i])
	{
		while (
				(str[i] >= 'a' &&
				 str[i] <= 'z') ||
				(str[i] >= 'A' &&
				 str[i] <= 'Z')
		      )
		{
			if (
					(str[i] >= 'n' &&
					 str[i] <= 'z') ||
					(str[i] >= 'N' &&
					 str[i] <= 'Z')
			   )
			{
				str[i] = str[i] - 13;
				i++;
				continue;
			}

			str[i] = str[i] + 13;
			i++;
		}

		i++;
	}

	return (str);
}
