#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: the times table to be printed
 */

void print_times_table(int n)
{
	int a, b;

	for (a = 0; a <= n; a++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');

		for (b = 1; b <= n; b++)
		{
			int m, j, o;

			m = a * b;
			j = m / 10;
			o = m / 100;

			if (o != 0)
				_putchar(o + '0');
			else
				_putchar(' ');
			if (j != 0)
				_putchar(j + '0');
			else
				_putchar(' ');

			_putchar((m % 10) + '0');

			if (b == n)
				continue;

			_putchar(',');
			_putchar(' ');
		}

		_putchar('\n');
	}
}
