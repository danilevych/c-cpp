#include <stdio.h>

// void arrayExchange(int array[], int len) {
    // int size = len - 1;
    // int temp;
    // temp = array[0];
    // array[0] = array[1];
    // array[1] = temp;

    // // printf("%d_\n", array[0]);
    // // printf("%d_\n", array[1]);

    // for ( int i = 2; i < size; i += 2 ) {
    //         temp = array[i];
    //         array[i] = array[i+1];
    //         array[i+1] = temp;

    // }

    // void arrayExchange(int array[], int len) {
    // for ( int i = 0, temp = 0; i < len; i += 2 ) {
        // temp = array[i];
        // array[i] = array[i+1];
        // array[i+1] = temp;
    // }
// }

// }

// void arrayExchange(int array[], int len) {
//     for ( int i = 1, temp = 0; i < len; i += 2 ) {
//         temp = array[i-1];
//         array[i-1] = array[i];
//         array[i] = temp;
//     }
// } повторный пересчет в цикле 

// void arrayExchange(int array[], int len) {
//     for ( int i = 1, j = 0, temp = 0; i < len; i +=2, j+=2 ) {
//         temp = array[j];
//         array[j] = array[i];
//         array[i] = temp;
//     }
// } ---- 2 лишних инструкции

void arrayExchange(int array[], int len) {
    for ( int i = 1, j = 0; i < len; i += 2, j += 2 ) {
        int temp = array[j];
        
        array[j] = array[i];
        array[i] = temp;
    }
}





int main () {
    int len = 7;
    int array[]  = { 1, 2, 3, 4, 5, 6, 7 };

    arrayExchange(array, len);

    for ( int i = 0; i < len; i++ ) {
        printf("%d\n", array[i]);
    }
    return 0;
}