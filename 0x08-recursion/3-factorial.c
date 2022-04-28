#include "main.h"

/**
 * factorial - find the factorial of a number
 * @n: the number
 *
 * Return: the factorial of n
 */

int factorial(int n)
{
	if (n == 0 || n == 1)
		return (1);
	else if (n < 1)
		return (-1);
	else
		return (n * factorial(n - 1));
}
