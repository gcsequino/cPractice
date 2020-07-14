/* This program converts hexadecimal numbers to decimal numbers
*
*  Author: Greyson Sequino, greyson.sequino@colostate.edu
*/

#include <stdio.h>
#include <string.h>

#define MAXLEN 1000

int hexToDec(char str[]);

int main() {
    char hex[MAXLEN];
    for (int i = 0; i < MAXLEN; i++) {
        hex[i] = 0;
    }
    
    int currChar;
    int j;
    j = 0;
    while ((currChar = getchar()) != EOF) {
        printf("%c", currChar);
        hex[j] = currChar;
        j++;
    }

    printf("\nHex Value: %d \n", hexToDec(hex));
    return 0;
}

int hexToDec(char str[]) {
    double power = strlen(str) - 2;
    int dec = 0;
    int val = 0;

    for (int i = 0; power >= 0; i++) {
        val = str[i];
        
        if (val >= '0' || val <= '9')


        dec += ((int) str[i] - '0') * pow(16.0, power);
        printf("~%d", str[i]);
        power--;
    }
    return dec;
}
