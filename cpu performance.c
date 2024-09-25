#include <stdio.h>

int main() {
    float response_time, throughput, execution_time;
    
    // Taking user input for CPU performance metrics
    printf("Enter Response Time (in seconds): ");
    scanf("%f", &response_time);
    
    printf("Enter Throughput (in tasks per second): ");
    scanf("%f", &throughput);
    
    printf("Enter Execution Time (in seconds): ");
    scanf("%f", &execution_time);

    // Calculate CPU Performance
    float cpu_performance = (throughput / response_time) - (execution_time / response_time);

    // Display the result
    printf("CPU Performance Metric: %.2f\n", cpu_performance);

    return 0;
}
