#include <stdio.h>
void fetch(int *num1, int *num2) {
    *num1 = 20; // Fetching the first number
    *num2 = 12; // Fetching the second number
}
void decode(char *operation) {
    *operation = '*'; // Assume multiplication operation
}
int execute(int num1, int num2) {
    return num1 * num2; // Perform multiplication
}
void writeback(int result) {
    printf("Result: %d\n", result); // Display the result
}
int main() {
    int num1, num2, result;
    char operation;
    fetch(&num1, &num2);
    decode(&operation);
    result = execute(num1, num2);
    writeback(result);
    int total_clock_cycles = 4; 
    printf("Total clock cycles needed: %d\n", total_clock_cycles);
    return 0;
}
