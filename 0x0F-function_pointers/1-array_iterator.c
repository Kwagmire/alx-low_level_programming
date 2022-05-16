#include "function_pointers.h"

/**
 * array_iterator - execute a function on each element of the array
 * @array: the array to be worked on
 * @size: size of the array
 * @action: the function to be implemented
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!(array && size && action))
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
