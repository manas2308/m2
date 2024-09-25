#include <stdio.h>
void fetch(int *instruction) {
    *instruction = 1;
    printf("Fetched instruction: %d\n", *instruction);
}
void decode(int instruction, char *operation) {
    *operation = 'A'; 
    printf("Decoded instruction: %c\n", *operation);
}
int execute(char operation, int operand1, int operand2) {
    if (operation == 'A') {
        return operand1 + operand2; // Execute addition
    }
    return 0; // Default case
}
int main() {
    int instruction;
    char operation;
    int operand1 = 5, operand2 = 10; // Example operands
    int result;
    fetch(&instruction);
    decode(instruction, &operation);
    result = execute(operation, operand1, operand2);
    int total_clock_cycles = 3; // Fetch, Decode, Execute
    printf("Execution Result: %d\n", result);
    printf("Total clock cycles needed: %d\n", total_clock_cycles);
    return 0;
}
