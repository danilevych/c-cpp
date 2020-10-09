#include <stdio.h>

void arraySort(int array[], int size) {
    int last = size-1;
    int tmp;

    for ( int j = 0; j < size; j++ ) {

    for ( int i = 0; i < size; i++ ) {
        // printf("i=%d\n", i);
        tmp = array[i];
        if ( array[i] > array[i+1] ) {
            // tmp = array[i];
            // printf("i=%d\n", i);
            //printf("array[%d] = %d\n", i, tmp);
            for ( int index = i; index < last; index++ ) {
                // printf("before: (array[%d]=%d) = (array[%d]=%d)\n", index, array[index], index+1, array[index+1]);
                // printf("-%d\n", array[index]);
                // printf("-%d\n", array[index+1]);
                array[index] = array[index+1];
                // printf("after: (array[%d]=%d) = (array[%d]=%d)\n", index, array[index], index+1, array[index+1]);
                // printf("*%d\n", array[index]);
                // printf("*%d\n", array[index+1]);
            }
            array[last] = tmp;
            // i = 0;
            //printf("(last - array[%d]=%d) (tmp = %d) (i=0; i=%d)\n", last, array[last], tmp, i);
        }

    }
}
}

int main() {
        int size = 4;
        int array[] = { 8, 11, 2, 3 };
    

        arraySort(array, size);

for ( int i = 0; i < size; i++ ) {
    printf("%d__", array[i]);
}
printf("\n");

return 0;
}