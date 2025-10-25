#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "sorting.h"

void init_array(int a[], int size){
    srand(time(NULL));
    for(int i=0; i<size; i++){
        a[i] = rand() % size;
    }
}

void print_array(int a[], int size){
    for(int i=0; i<size; i++){
        printf("%3d ", a[i]);
    }
    putchar('\n');
}