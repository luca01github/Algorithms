#include <stdio.h>
#include "sorting.h"
#define SIZE 100

void insertion_sort(int a[], int size);

int main(){
    int array[SIZE];
    init_array(array, SIZE);
    print_array(array, SIZE);

    insertion_sort(array, SIZE);
    print_array(array, SIZE);
}

void insertion_sort(int a[], int size){
    for(int i=1; i<size; i++){
        int k = i;
        int temp = a[i];

        while(k > 0 && temp < a[k-1]){
            a[k] = a[k-1];
            k--;
        }
        a[k] = temp;
    }
}