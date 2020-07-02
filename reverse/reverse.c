#include <stdio.h>
#define MAXLINE 1000	/* max input line size */

int getLine(char line[], int maxline);
void reverse(char input[], char output[]);

/* prints each line of input in reverse order */
main() {
	int len;	/* length of current line */
	char input[MAXLINE];
	char output[MAXLINE];
	
	while ((len = getLine(input, MAXLINE)) > 0) {
		reverse(input, output);
		printf("%s\n", output);
	}
	return 0;
}

/* getLine: read a line into s, return length */
int getLine(char s[], int lim) {
	int c, i;

	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; i++) {
		s[i] = c;
	}
	if (c == '\n') {
		s[i++] = c;
	}
	s[i] = '\0';
	return i;
}

/* reverse: copies the characters in 'input' to 'output' in reverse order */
void reverse(char input[], char output[]) {
	int i, j, k;

	for (i = 0; input[i] != '\0'; i++) {
		k = i - 1;
	}
	for ( j = 0; j <= i-1; j++) {
		output[j] = input[k--];
	}
}
