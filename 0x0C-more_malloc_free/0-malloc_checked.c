#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocate memory using malloc
 * @b: the number of bytes to allocate
 *
 * Return: a pointer to the memory block allocated
 */
void *malloc_checked(unsigned int b)
{
	if (b == 0 || malloc(b) == NULL)
		exit(98);
	else
		return (malloc(b));
}
