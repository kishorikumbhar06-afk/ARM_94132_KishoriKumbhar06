#include <stdio.h>

void printBinary(int n) {
    int i;
    // print 32 bits (for normal int)
    for (i = 31; i >= 0; i--) {
        int bit = (n >> i) & 1;
        printf("%d", bit);
    }
    printf("\n");
}

int main() {
    int num;
    printf("Enter number: ");
    scanf("%d", &num);

    printf("Binary = ");
    printBinary(num);

    return 0;
}
