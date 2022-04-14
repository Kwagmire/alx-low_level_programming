#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 */

void times_table(void)
{
	int a, b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			int m, n;

			m = a * b;
			n = m / 10;

			if (n != 0)
				_putchar(n + '0');

			_putchar((m % 10) + '0');
			_putchar(',');
			_putchar(' ');
		}

		_putchar('\n');
	}
}
