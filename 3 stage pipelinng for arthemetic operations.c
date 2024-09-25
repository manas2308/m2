#include <stdio.h>
void fetch(int *num1, int *num2) {
    *num1 = 8;  // Fetching the first number
    *num2 = 10; // Fetching the second number
}
char decode() {
    return '+'; 
}
int execute(int num1, int num2, char operation) {
    switch (operation) {
        case '+': return num1 + num2; // Addition
        case '-': return num1 - num2; // Subtraction
        case '*': return num1 * num2; // Multiplication
        case '/': return num1 / num2; // Division
        default: return 0; // Invalid operation
    }
}
int main() {
    int num1, num2, result;
    char operation;
    fetch(&num1, &num2);
    operation = decode();
    result = execute(num1, num2, operation);
    int clock_cycles_per_operation = 3;
    int total_clock_cycles = clock_cycles_per_operation;
    printf("Performing operation: %d %c %d = %d\n", num1, operation, num2, result);
    printf("Total clock cycles needed: %d\n", total_clock_cycles);
    return 0;
}
