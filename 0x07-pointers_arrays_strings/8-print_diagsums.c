#include "main.h"

/**
 * print_diagsums - print the sum of the two diagonals of
 * a square matrix of integers
 * @a: 2D array of integers
 * @size: size of array
 *
 */

void print_diagsums(int *a, int size)
{
	unsigned int right_sum = 0, i, c, left_sum = 0;

	for (i = 0; a[i][size - 1]; i++)
	{
		for (c = 0; c < size; c++)
		{
			if (i == c)
				left_sum += a[i][c];
			if (i + c == size - 1)
				right_sum += a[i][c];
		}
	}

	printf("%d, %d", left_sum, right_sum);
}
