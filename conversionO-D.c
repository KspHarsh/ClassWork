#include <stdio.h>

int octalToDecimal(int octal, int base) {
    if (octal == 0) {
        return 0;
    }
    return (octal % 10) * base + octalToDecimal(octal / 10, base * 8);
}

int main() {
    int octal;
    printf("Enter an octal number: ");
    scanf("%d", &octal);
    printf("Decimal equivalent: %d\n", octalToDecimal(octal, 1));
    return 0;
}