#include <stdio.h>

char checkAlphabetXOR(char ch) {

    // check alphabet
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        ch = ch ^ 32;   // XOR with 32
    }

    return ch;
}

int main() {
    char c;

    printf("Enter a character: ");
    scanf(" %c", &c);

    c = checkAlphabetXOR(c);

    printf("Result = %c\n", c);

    return 0;
}


