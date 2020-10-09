#include <stdio.h>

int intScan(FILE *in) {
    int size;
    
    fscanf(in, "%d", &size);
    return size;
}

int partition(int array[], int start, int end) {
    int pivot = (start + end) / 2;
    int temp = array[pivot];
    int j = start;
    
    array[pivot] = array[end];
    array[end] = temp;
    pivot = end;
    
    for ( int i = start; i < end; i++ ) {
        if ( array[i] < array[end] ) {
            temp = array[i];
            array[i] = array[j];
            array[j] = temp;
            j += 1;
        }
    }
    temp = array[j];
    array[j] = array[end];
    array[end] = temp;
    pivot = j;
    return pivot;
}

void quickSort(int array[], int start, int end) {
    if ( start >= end ) {
        return;
    } else {
        int fixed = partition(array, start, end);
        
        quickSort(array, start, fixed-1);
        quickSort(array, fixed+1, end);
    }
}

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    int len = intScan(in);
    int array[len];
    int start = 0;
    int end = len - 1;
    
    for ( int i = 0; i < len; i++ ) {
        fscanf(in, "%d ", &array[i]);
    }
    
    quickSort(array, start, end);
    
    for ( int i = 0; i < len - 1; i++ ) {
        fprintf(out, "%d ", array[i]);
    }
    fprintf(out, "%d\n", array[len-1]);
    
    fclose(in);
    fclose(out);
    
    return 0;
}
