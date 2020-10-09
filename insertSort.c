#include <stdio.h>

void insertSort(int array[], int size) {
    for ( int i = 1; i < size; i++ ) { 
        for ( int j = i, prev = j - 1; j > 0 && array[j] < array[prev]; j--, prev-- ) {
            int temp = array[j];

            array[j] = array[prev];
            array[prev] = temp;
        }
    }
}

int main() {
        int size = 6;
        int array[] = { 8, 11, 2, 3, 6, 89 };
    

        insertSort(array, size);

for ( int i = 0; i < size; i++ ) {
    printf("%d__", array[i]);
}
printf("\n");

return 0;
}
