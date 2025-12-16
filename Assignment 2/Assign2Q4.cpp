#include <stdio.h>
#include <stdint.h>

int main()
{
    uint8_t value = 5;  

    // Left shift by 2
    uint8_t left = value << 2;
    printf("Left shift by 2: %d\n", left);

    // Right shift by 1
    uint8_t right = value >> 1;
    printf("Right shift by 1: %d\n", right);

    return 0;
}
