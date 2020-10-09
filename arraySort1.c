#include <stdio.h>

void arraySort(int array[], int size) {
    int last = size - 1;
    int tmp;
    int all = size * 2;
    
    for ( int i = 0; i < all; i++ ) {
        for ( int j = 0; j < size; j++ ) {
            // tmp = array[j];
            
            if ( array[j] > array[j+1] ) {
                tmp = array[j];
                for ( int k = j; k < last; k++ ) {
                    array[k] = array[k+1];
                }
                array[last] = tmp;
            }
        }
    }
}

int main() {
        int size = 60;
        int array[] = { 3, 4, 9, 4, 4, -7, -7, 15, 6, 6, 3, 4, 9, 4, 4, -7, -7, 15, 6, 6, 3, 4, 9, 4, 4, -7, -7, 15, 6, 6, 3, 4, 9, 4, 4, -7, -7, 15, 6, 6, 3, 4, 9, 4, 4, -7, -7, 15, 6, 6, 3, 4, 9, 4, 4, -7, -7, 15, 6, 6 };
    

        arraySort(array, size);

for ( int i = 0; i < size; i++ ) {
    printf("%d__", array[i]);
}
printf("\n");

return 0;
}