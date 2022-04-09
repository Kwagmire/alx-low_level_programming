#include <stdio.h>


/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	char d;



	c = 'a';
	d = 'A';



	for (; c <= 'z'; c++)
		putchar(c);

	for (; d <= 'Z'; d++)
		putchar(d);


	putchar('\n');

	return (0);
}
