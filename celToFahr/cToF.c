#include <stdio.h>

/* This programs prints a celsius to fahrenheit table from 0 F to 300 F */

main() {
	// print header
	printf("Fahrenheit - Celsius\n");

	float f, c;
	int lower, upper, step;

	lower = 0;	// Lower Limit of table
	upper = 300;	// upp limit of table
	step = 20; 	// step size

	f = lower;
	while (f <= upper) {
		c = (5.0 / 9.0) * (f - 32.0);
		printf("%10.0f - %7.1f\n", f, c);
		f = f + step;
	}

}
