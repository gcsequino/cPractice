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
    printf("Hex Value: ");
    while ((currChar = getchar()) != EOF) {
        printf("%c", currChar);
        hex[j] = currChar;
        j++;
    }

    printf("\nDecimal Value: %d \n", hexToDec(hex));
    return 0;
}

int hexToDec(char str[]) {
    double power = strlen(str) - 2;
    int dec = 0;
    int val = 0;

    for (int i = 0; power >= 0; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            val = str[i] - '0';
        }
        else if (str[i] >= 'A' && str[i] <= 'F') {
            val = str[i] - 'A' + 10;
        }
        else if (str[i] >= 'a' && str[i] <= 'f') {
            val = str[i] - 'a' + 10;
        }

        dec += val * pow(16.0, power);
        // Debug: printf("~%d", str[i]);
        power--;
    }
    return dec;
}
