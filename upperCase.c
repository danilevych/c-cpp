// #include <stdio.h>

// int main() {
//     FILE *in = fopen("task.in", "r");
//     FILE *out = fopen("task.out", "w");
//     int size = 1000;
//     char array[size];

//     for ( int i = 0; i < size && fscanf(in, "%c", &array[i]) == 1; i++ );
    

//     for ( int i = 0; i < size; i++ ) {
//         fprintf(out, "%c ", array[i]-32);
//     }

//     fclose(in);
//     fclose(out);

//     return 0;
// }

#include <stdio.h>

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    int size = 1000;
    char array[size];
    int amount = 0;
    int last;
    
    for ( int i = 0; i < size && fscanf(in, "%c", &array[i]) == 1; i++ ) {
        amount += 1;
    }
    last = amount - 1;
    
    for ( int i = 0; i < last; i++ ) {
        fprintf(out, "%c ", array[i]-32);
    }
    fprintf(out, "%c\n", array[last]-32);
    
    fclose(in);
    fclose(out);
    
    return 0;
}
