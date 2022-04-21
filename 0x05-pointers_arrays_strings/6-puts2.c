#include "main.h"

/**
 * puts2 - print every other character of a string, followed by a new line
 * @str: the string
 *
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
