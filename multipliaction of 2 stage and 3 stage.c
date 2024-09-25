#include <stdio.h>
int multiply_2_stage(int num1, int num2) {
    return num1 * num2;
}
int multiply_3_stage(int num1, int num2) {
    return num1 * num2;
}
int main() {
    int num1 = 2, num2 = 4;
    int result_2_stage = multiply_2_stage(num1, num2);
    int total_clock_cycles_2_stage = 2; // Fetch and Execute
    int result_3_stage = multiply_3_stage(num1, num2);
    int total_clock_cycles_3_stage = 3; // Fetch, Decode, Execute
    printf("2-Stage Pipelining:\n");
    printf("Result: %d\n", result_2_stage);
    printf("Total clock cycles needed: %d\n", total_clock_cycles_2_stage);
    printf("\n3-Stage Pipelining:\n");
    printf("Result: %d\n", result_3_stage);
    printf("Total clock cycles needed: %d\n", total_clock_cycles_3_stage);
    if (total_clock_cycles_2_stage < total_clock_cycles_3_stage) {
        printf("\n2-Stage Pipelining is more efficient.\n");
    } else if (total_clock_cycles_2_stage > total_clock_cycles_3_stage) {
        printf("\n3-Stage Pipelining is more efficient.\n");
    } else {
        printf("\nBoth pipelining stages have the same efficiency.\n");
    }

    return 0;
}
