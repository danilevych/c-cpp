#include <stdio.h>

void arrayPrintReversed(int array[], int size) {
    for ( int i = size - 1; i > 0; i-- ) {
        printf("%d ", array[i]);
    }
    printf("%d\n", array[0]);
}

// int main() {
//     int size = 3;
//     int array[] = { 1, 2, 3 };

//     arrayPrintReversed(array, size);

//     return 0;
// }