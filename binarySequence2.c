#include <stdio.h>

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    int number = 0;
    int nulls = 0;
    int counter = 0;
    
    for ( ; fscanf(in, "%1d", &number) != EOF; ) {
        if ( number == 0 ) {
            nulls += 1;
        }
    }
    
    rewind(in);
    
    for ( int i = 0; fscanf(in, "%1d", &number) == 1 && i < nulls; i++ ) {
        if ( number == 1 ) {
            counter += 1;
        }
    }
    
    fprintf(out, "%d\n", counter);
    
    fclose(in);
    fclose(out);
    
    return 0;
}
    