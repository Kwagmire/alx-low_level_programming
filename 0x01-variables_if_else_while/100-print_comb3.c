#include <stdio.h>


/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;
	int d;


	c = 0;


	for (; c <= 8; c++)
	{
		for (d = c + 1; d <= 9; d++)
		{
			putchar((c % 10) + '0');
			putchar((d % 10) + '0');

			if (c == 8 && d == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');


	return (0);
}
