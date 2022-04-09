#include <stdio.h>


/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;


	c = 0;


	for (; c <= 9; c++)
	{
		putchar((c % 10) + '0');
		if (c == 9)
			continue;
		putchar(',');
		putchar(' ');
	}

	putchar('\n');


	return (0);
}
