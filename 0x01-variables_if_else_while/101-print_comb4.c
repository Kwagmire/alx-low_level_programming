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
	int e;


	c = 0;


	for (; c < 8; c++)
	{
		for (d = c + 1; d < 9; d++)
		{
			for (e = d + 1; e < 10; e++)
			{
				putchar((c % 10) + '0');
				putchar((d % 10) + '0');
				putchar((e % 10) + '0');

				if (c == 7 && d == 8 && e == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');


	return (0);
}
