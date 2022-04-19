#include <stdio.h>

/**
 * main - print the first Fibonacci numbers,
 * starting with 1 and 2
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	long long int i, c, d, number;

	c = 1;
	d = 2;

	printf("%lld, %lld", c, d);

	for (i = 1; i < 25; i++)
	{
		number = c + d;
		printf(", %lld", number);
		c = number;
		number = c + d;
		printf(", %lld", number);
		d = number;
	}
	printf("\n");

	return (0);
}
