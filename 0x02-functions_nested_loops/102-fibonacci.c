#include <stdio.h>

/**
 * main - print the first Fibonacci numbers,
 * starting with 1 and 2
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, c, d, number;

	c = 1;
	d = 2;

	printf("%d, %d", c, d);

	for (i = 1; i < 25; i++)
	{
		number = c + d;
		printf(", %d", number);
		c = number;
		number = c + d;
		printf(", %d", number);
		d = number;
	}
	printf("\n");

	return (0);
}
