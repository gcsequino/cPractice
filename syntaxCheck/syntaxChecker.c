#include <stdio.h>

int parenth, brackets, braces, sQuotes, dQuotes, comments;

int checker(char c);

main() {
	printf("Checking for syntax errors. \n");

	char c;
	while ((c = getchar()) != EOF) {
		checker(c);
		printf(".");
	}
	printf("\n");

	printf("parenth: %d\n", parenth);

	printf("brackets: %d\n", brackets);

	printf("braces: %d\n", braces);

	printf("sQuotes: %d\n", sQuotes);

	printf("dQuotes: %d\n", dQuotes);


	return 0;
}

int checker(char c) {
	switch (c) {
		case '(':
			parenth++;
			return 0;
		case ')':
			parenth--;
			return 0;
		case '[':
			brackets++;
			return 0;
		case ']':
			brackets--;
			return 0;
		case '{':
			braces++;
			return 0;
		case '}':
			braces--;
			return 0;
		case '\'':
			sQuotes++;
			return 0;
		case '\"':
			dQuotes++;
			return 0;
		case EOF:
			return 1;
	}
}
