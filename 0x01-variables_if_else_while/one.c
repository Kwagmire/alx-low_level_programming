#include <stdio.h>

int main(void) {
	int c;


	c = 0;



	while (c < 10) {
		putchar((c % 10) + '0');
		c++;
	}

	putchar('\n');

	return (0);
}
