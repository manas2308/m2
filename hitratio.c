#include <stdio.h>
int main() {
    int hits = 24;
    int misses = 5;  
    int total_accesses = hits + misses;
    float hit_ratio = (float)hits / total_accesses;
    printf("Hit Ratio: %.2f\n", hit_ratio);
    return 0;
}
