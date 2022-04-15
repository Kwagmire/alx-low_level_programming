#include "main.h"

/**
 * print_triangle - draw a triangle
 * @size: base length
 */

void print_triangle(int size)
{
	int count;
	int space;

	for (count = 1; count <= size; count++)
	{
		for (space = size - 1; space > 0; space--)
			_putchar(' ');

		int hash;

		for (hash = 1; hash <= count; hash++)
			_putchar('#');

		if (count == size)
			continue;

		_putchar('\n');
	}

	_putchar('\n');
}
