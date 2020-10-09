#include <stdio.h>

int partition(int array[], int start, int end) {
    int pivot = (start + end) / 2;
    int temp = array[pivot];
    int j = 0;
    
    array[pivot] = array[end];
    array[end] = temp;

    for ( int i = start; i <= end; i++ ) {
        printf("%d\n", array[i]);
    }
printf("______________________\n");
    
   

        printf("pivot=%d\n", pivot);
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
   
    printf("%d\n", pivot);
    return pivot;
}

int main() {
    int start = 0; 
    int end = 5;
    int array[6] = { 5, 4, 3, 2, 1, 0 };

    // scanf("%d %d", &start, &end);

    printf("_____________________\n");

    for ( int i = start; i <= end; i++ ) {
        printf("%d\n", array[i]);
    }

    printf("_____________________\n");

    partition(array, start, end);

    for ( int i = start; i <= end; i++ ) {
        printf("%d_", array[i]);
    }

    return 0;
}