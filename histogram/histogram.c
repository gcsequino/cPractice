#include <stdio.h>

/* counts occurances of a...z / A...Z and displays them on a histogram */

int main(void) {
	// current char
	int c;

	// occurances of a...z
	int lower[26];

	// occurances of A...Z
	int upper[26];

	// occurances of other charaters
	int other = 0;

	for (int i = 0; i < 26; i++) {
		lower[i] = 0;
		upper[i] = 0;
	}

	// iterate through input
	while ((c = getchar()) != EOF) {
		// check for a..z
		if (c >= 'a' && c <= 'z') {
			++lower[c - 'a'];
		}
		// check for A...Z
		else if (c >= 'A' && c <= 'Z') {
			++upper[c - 'A'];
		}
		// c is other
		else {
			++other;
		}
	}

	// print histogram
	printf("Occurances of a...z\n");
	int index = 0;
	for (int i = 'a'; i <= 'z'; i++) {
		printf("%c: ", i);
		for (int j = 0; j < lower[index]; j++) {
			printf("-");
		}
		printf("\n");
		index++;
	}
	
	index = 0;
	printf("Occurances of A...Z\n");
	for (int i = 'A'; i <= 'Z'; i++) {
		printf("%c: ", i);
		for (int j = 0; j < lower[index]; j++) {
			printf("-");
		}
		printf("\n");
		index++;
	}
}
