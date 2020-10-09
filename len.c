#include <stdio.h>

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    
    int size = 100;
    int array[size];
    int counter = 0;

    for ( ; counter < size && fscanf(in, "%d", &array[size]) == 1; counter++ );

    fprintf( out, "%d\n", counter);
    
    fclose(in);
    fclose(out);
    
    return 0;
}
