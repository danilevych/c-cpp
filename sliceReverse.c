#include <stdio.h>

// void sliceReverse(int array[], int lo, int hi ) {
//     for ( int i = hi, j = hi; i <= j; i++, j-- ) {
//         int tmp = array[i];
        
//         array[i] = array[j];
//         array[j] = tmp;
//     }
// }

void sliceReverse(int array[], int lo, int hi) {
    for ( ; lo < hi; lo++, hi-- ) {
        int tmp = array[lo];
        
        array[lo] = array[hi];
        array[hi] = tmp;
    }
}


    int main() {
        int array[] = { 1, 2, 3, 4 };
    

        slikeReverse(array, lo, hi);

for ( int i = 0; i < size; i++ ) {
    printf("%d\n", array[i]);
}

        return 0;
    }