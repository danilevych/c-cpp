// #include <stdio.h>

// void arrayAbs(int array[], int size) {
//     for (int i = 0; i < size; i++) {
//         if ( array[i] < 0 ) {
//             array[i] *= -1;
//         }
//     }
// }

// void arrayPrint(FILE *out, int array[], int size) {
//     int last = size - 1;
//     for ( int i = 0; i < last; i++ ) {
//         fprintf( out, "%d ", array[i] );
//     }
//     fprintf( out, "%d\n", array[last]);
// }

// int main() {
//     FILE *in = fopen("task.in", "r");
//     FILE *out = fopen("task.out", "w");
//     int size;
//     int array[size];

//     fscanf(in, "%d", &size);
//     // printf("TEST!!!\n");
//     for ( int i = 0; i < size; i++ ) {
//         fscanf(in, "%d", &array[i]); {
//         // printf("array[%d] = %d\n", i, array[i]);
//             // arrayAbs(array, size);
//         }
//         // arrayPrint(out, array, size);
//     }

//     arrayAbs(array, size);

//     arrayPrint(out, array, size);

//     fclose(in);
//     fclose(out);

//     return 0;
// }

#include <stdio.h>

void arrayAbs(int array[], int size) {
    for ( int i = 0; i < size; i++ ) {
        if ( array[i] < 0 ) {
            array[i] *= -1;
        }
    }
}

void arrayPrint(FILE *out, int array[], int size) {
    int last = size - 1;
    
    for ( int i = 0; i < last; i++ ) {
        fprintf(out, "%d ", array[i]);
    }
    fprintf(out, "%d\n", array[last]);
}

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    int size = 1000000;
    int array[size];
    
    fscanf(in, "%d", &size);
    
    for ( int i = 0; i < size; i++ ) {
        fscanf(in, "%d", &array[i]);
    }
    
    arrayAbs(array, size);
    
    arrayPrint(out, array, size);
    
    fclose(in);
    fclose(out);
    
    return 0;
}
