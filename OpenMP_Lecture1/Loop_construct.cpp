/**
This is an exmple code used in the OpenMP - lecture 1 <br>
@author : Duksu Kim and Young-Gyu Kim
*/

#include <stdio.h>
#include <stdlib.h>
#include <omp.h>
#include "DS_timer.h"

int main(void) {
#pragma omp parallel
    {
#pragma omp for
        for (int i = 0; i < 16; i++) {
            printf("[Thread %d] executes loop iteration %d\n", omp_get_thread_num(), i);
        }
    }

    getchar();
}
