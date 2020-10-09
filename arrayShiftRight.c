#include <stdio.h>

void arrayShiftRight(int array[], int size) {
    int last = size - 1;
    int tmp = array[last];
    
    for ( int i = 0; i < last; last-- ) {
            array[last] = array[last-1];
    }
    array[0] = tmp;
}

    int main() {
        int size = 5;
        int array[] = { 1, 9, 3, 8, 5 };
    

        arrayShiftRight(array, size);

for ( int i = 0; i < size; i++ ) {
    printf("%d\n", array[i]);
}

        return 0;
    }