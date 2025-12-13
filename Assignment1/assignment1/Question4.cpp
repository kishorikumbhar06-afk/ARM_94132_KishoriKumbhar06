#include <stdio.h>

/* Function to check even parity and fix it */
unsigned char makeEvenParity(unsigned char b)
{
    int count = 0;
    int i;

    /* Count number of 1 bits */
    for (i = 0; i < 8; i++)
    {
        if (b & (1 << i))
            count++;
    }

    /* If number of 1s is odd, set MSB */
    if (count % 2 != 0)
        b = b | 0x80;   /* 0x80 = 10000000 */

    return b;
}

int main()
{
    unsigned char byte;

    printf("Enter a number (0-255): ");
    scanf("%hhu", &byte);

    byte = makeEvenParity(byte);

    printf("Byte after even parity = %u\n", byte);

    return 0;
}
