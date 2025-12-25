#include <stdio.h>

unsigned char evenParity(unsigned char b) {
    int i, ones = 0;
    
    for (i = 0; i < 8; i++) {
        if (b & (1 << i))
            ones++;
    }

    if (ones % 2 != 0)
        b = b | 0x80;

    return b;
}

int main() {
    unsigned char byte;

    printf("Enter byte (0-255): ");
    scanf("%hhu", &byte);

    byte = evenParity(byte);

    printf("Byte after even parity = %u\n", byte);
    return 0;
}


