#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_numbers - print all the numbers passed
 * @separator: string to be printed between numbers
 * @n: the count of numbers passed
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	if (n == 0)
		return;

	va_start(ap, n);
	printf("%d", va_arg(ap, int));

	for (i = 1; i < n; i++)
	{
		if (separator != NULL)
			printf("%s%d", separator, va_arg(ap, int));
		else
			printf("%d", va_arg(ap, int));
	}
	printf("\n");
	va_end(ap);
}
