#include <stdio.h>
#include <stdint.h>

void printBinary8(uint8_t num)
{
    for(int i = 7; i >= 0; i--)
        printf("%d", (num >> i) & 1);
}

int main()
{
    uint8_t reg = 0x2A;   

    printf("Initial value: 0x%X  ", reg);
    printBinary8(reg);
    printf("\n");

   
    reg = reg | (1 << 4);
    printf("After setting bit 4: 0x%X  ", reg);
    printBinary8(reg);
    printf("\n");

    
    reg = reg & ~(1 << 1);
    printf("After clearing bit 1: 0x%X  ", reg);
    printBinary8(reg);
    printf("\n");

   
    reg = reg ^ (1 << 5);
    printf("After toggling bit 5: 0x%X  ", reg);
    printBinary8(reg);
    printf("\n");

    return 0;
}
