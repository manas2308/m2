#include <stdio.h>
int main() {
    int binary, octal = 0, decimal = 0, base = 1;
    printf("Enter a binary number: ");
    scanf("%d", &binary);

    while (binary > 0) {
        decimal += (binary % 10) * base;
        binary /= 10;
        base *= 2;
    }

    base = 1;
    while (decimal > 0) {
        octal += (decimal % 8) * base;
        decimal /= 8;
        base *= 10;
    }

    printf("Octal: %d\n", octal);
    return 0;
}
