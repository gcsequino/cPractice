#include <stdio.h>

/* this program copies the input to the output */

main(){
	int c;

	while ((c = getchar()) != EOF) {
		putchar(c);
	}
}
