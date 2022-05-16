#include "function_pointers.h"

/**
 * print_name - print a name
 * @name: the name to print
 * @f: pointer to the specific print variant
 *
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
