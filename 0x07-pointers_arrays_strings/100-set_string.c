#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer to the pointer we want to change its value
 * @to: the pointer to the value we want to set a pointer to
 *
 */

void set_string(char **s, char *to)
{
	*s = to;
}
