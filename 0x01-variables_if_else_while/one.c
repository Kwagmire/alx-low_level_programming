#include <stdio.h>

int main(void) {
	char c;
	char d;


	c = 'a';
	d = 'A';



	while (c <= 'z') {
		putchar(c);
		c++;
	}


	for (; d <= 'Z'; d++)
		putchar(d);

	putchar('\n');

	return (0);
}
