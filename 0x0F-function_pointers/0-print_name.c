#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - print a name
 * @name: the name to print
 * @f: pointer to the specific print variant
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
