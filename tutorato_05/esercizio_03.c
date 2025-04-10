//Created on 2 April 2025 by Elena M Galdi

#include <stdio.h>
#include <stdlib.h> 

typedef struct array_info {
    int max;
    int min;
    float mean;
    float variancee;
} array_info_t;


array_info_t array_stats(const int *values,unsigned size){
    array_info_t stats;
    int sum = 0;
    int sum_squared = 0;

    stats.max = values[0];
    stats.min = values[0];

    for (unsigned i = 0; i < size; i++) {
        if (values[i] > stats.max) {
            stats.max = values[i];
        }
        if (values[i] < stats.min) {
            stats.min = values[i];
        }
        sum += values[i];
        sum_squared += values[i] * values[i];
    }

    stats.mean = (float)sum / size;
    stats.variancee = ((float)sum_squared / size) - (stats.mean * stats.mean);

    return stats;
}

void array_stats_v2(array_info_t*r, int *values,unsigned size);

array_info_t * array_stats_v3(int *values,unsigned size);

void array_stats_v4(array_info_t**r, const int *values,unsigned size);