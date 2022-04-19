#include <stdio.h>

/**
 * main - prints largest prime factor of 612852475143
 *
 * Return: Always 0(Success)
 */

int main(void)
{
	unsigned long factor, largest, prime, count, n;
	unsigned long number = 612852475143;

	for (count = 2; count <= number; count++)
	{
		n = 0;

		if (number % count == 0)
		{
			factor = count;

			for (prime = 2; prime < factor; prime++)
			{
				if (factor % prime == 0)
					n = n + 1;
			}

			if (n == 0)
				largest = factor;

		}
	}

	printf("%lu\n", largest);

	return (0);
}
