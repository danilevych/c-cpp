// #include <stdio.h>

// int arraySearch(int array[], int size, int needle) {
//     for ( int i = 0; i < size; i++ ) {
//         if ( needle == array[i] ) {
//             return i;
//         }
//     }
//     return -1;
// }

// // void arrayIncrement(int array[], int size, int increment) {
    
// //     for ( int i = 0; i < size; i++ ) {
// //            array[i]+=increment;
// //           } 
// // }

// int main() {
//     FILE *in = fopen("task.in", "r");
//     FILE *out = fopen("task.out", "w");
//     int size = 100;
//     int array[size];
//     int needle;
//     int amount = 0;
    
//     fscanf(in, "%d", &needle);
    
//     for (  = 0; i < size && fscanf(in, "%d", &array[i]) == 1; i++ ) {
//         amount = i;
//     }
    
//     needle = arraySearch(array, amount, needle);
    
//     fprintf(out, "%d\n", needle);
    
//     fclose(in);
//     fclose(out);
    
//     return 0;
// }

#include <stdio.h>

int arraySearch(int array[], int size, int needle) {
    for ( int i = 0; i < size; i++ ) {
        if ( needle == array[i] ) {
            return i;
        }
    }
    return -1;
}

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    int size = 100;
    int array[size];
    int needle;
    int amount = 0;
    
    fscanf(in, "%d", &needle);
    
    for ( int i = 0; i < size && fscanf(in, "%d", &array[i]) == 1; i++ ) {
        amount += 1;
    }
    
    fprintf(out, "%d\n", arraySearch(array, amount, needle));
    
    fclose(in);
    fclose(out);
    
    return 0;
}
