#include <stdio.h>

int main(void) {
	char c;
	char d;


	c = 'a';
	d = 'A';



	while (c <= 'z') {
		if (c != 'q' && c != 'e')
			putchar(c);
		c++;
	}

	putchar('\n');

	return (0);
}
