#include <stdio.h>


/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;
	char a;


	c = 0;
	a = 'a';


	while (c <= 9)
	{
		putchar((c % 10) + '0');
		c++;
	}


	for (; a <= 'f'; a++)
		putchar(a);

	putchar('\n');


	return (0);
}
