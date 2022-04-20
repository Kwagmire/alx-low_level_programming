#include <stdio.h>

/**
 * main - prints largest prime factor of 612852475143
 *
 * Return: Always 0(Success)
 */

int main(void)
{
	long factor, largest, prime, count, n;
	long number = 612852475143;

	for (count = 2; count <= number / 2; count++)
	{
		if (number % count == 0)
		{
			factor = count;
			n = 0;

			for (prime = 2; prime < factor; prime++)
			{
				if (factor % prime == 0)
					n = n + 1;
			}

			if (n == 0)
				largest = factor;

		}
	}

	printf("%ld\n", largest);

	return (0);
}
