#include <stdio.h>

/**
 * print_triangle - draw a triangle
 * @size: base length
 */

int main(void)
{
	void print_triangle(int size)
	{
		int count;
		int space;

		for (count = 1; count <= size; count++)
		{
			for (space = count; space < size; space++)
				putchar(' ');

			int hash;

			for (hash = 1; hash <= count; hash++)
				putchar('#');

			if (count == size)
				continue;

			putchar('\n');
		}

		putchar('\n');
	}

	print_triangle(4);

	return (0);
}
