#include <stdio.h>

int binaryToDecimal(int binary, int base) {
    if (binary == 0) {
        return 0;
    }
    return (binary % 10) * base + binaryToDecimal(binary / 10, base * 2);
}

int main() {
    int binary;
    printf("Enter a binary number: ");
    scanf("%d", &binary);
    printf("Decimal equivalent: %d\n", binaryToDecimal(binary, 1));
    return 0;
}