#include <stdio.h>

int intScan(FILE *in) {
    int x;
    
    fscanf(in, "%d", &x);
    return x;
}

long long unsigned power(long long unsigned value) {
    return 1 << value;
}

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    int maxJump = intScan(in);
    int cell = intScan(in);
    long long unsigned ways = 0;
    long long unsigned sum = 0;
    long long unsigned array[cell];
    long long unsigned last = cell - 1;
    
    if ( cell > maxJump ) {
        for ( long long unsigned i = 0, j = 0; i < maxJump; i++, j++ ) {
            array[i] = power(j);
            sum += array[i];
        }
        for ( long long unsigned i = 0, j = maxJump; i < cell - 1; i++, j++ ) {
            array[j] = sum;
            sum = 0;
            for ( long long unsigned k = i + 1, t = j + 1; k < t; k++ ) {
                sum += array[k];
            }
        }
    }
    ways = array[last];
    if ( maxJump == 1 || cell == 1 ) {
        ways = 1;
    }
    if ( maxJump == 1 && cell == 1 ) {
        ways = 1;
    }
    if ( cell > 1 && cell <= maxJump ) {
        ways = power(cell-1);
    }
    fprintf(out, "%llu\n", ways);
    fclose(in);
    fclose(out);
    return 0;
}
