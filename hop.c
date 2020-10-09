// #include <stdio.h>

// int main() {
//     FILE *in = fopen("task.in", "r");
//     FILE *out = fopen("task.out", "w");
//     int maxJump, cell;
//     long long unsigned ways = 0;
    
//     fscanf(in, "%d %d", &maxJump, &cell);
    
//     if ( cell > maxJump ) {
//         long long unsigned sum = 0;
//         long long unsigned array2[cell];
//         long long unsigned last = cell - 1;
        
//         for ( long long unsigned i = 0, j = 0; i < maxJump; i++, j++ ) {
//             array2[i] = 1 << j;
//             sum += array2[i];
//         }
//         for ( long long unsigned i = 0, j = maxJump; i < cell - 1; i++, j++ ) {
//             array2[j] = sum;
//             sum = 0;
//             for ( long long unsigned k = i + 1, t = j + 1; k < t; k++ ) {
//                 sum += array2[k];
//             }
//         }
//         ways = array2[last];
//     }
//     if ( maxJump == 1 || cell == 1 ) {
//         ways = 1;
//     }
//     if ( cell > 1 && cell <= maxJump ) {
//         ways = 1 << (cell - 1);
//     }
//     fprintf(out, "%llu\n", ways);
//     fclose(in);
//     fclose(out);
//     return 0;
// }

#include <stdio.h>

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    int maxJump, cell;
    long long unsigned ways;
    
    fscanf(in, "%d %d", &maxJump, &cell);
    
    if ( cell > maxJump ) {
        long long unsigned sum = 0;
        long long unsigned array2[cell];
        
        for ( long long unsigned i = 0, j = 0; i < maxJump; i++, j++ ) {
            array2[i] = 1 << j;
            sum += array2[i];
        }
        for ( long long unsigned i = 0, j = maxJump; i < cell - 1; i++, j++ ) {
            array2[j] = sum;
            sum = 0;
            for ( long long unsigned k = i + 1, t = j + 1; k < t; k++ ) {
                sum += array2[k];
            }
        }
        ways = array2[cell-1];
    }
    if ( maxJump == 1 || cell == 1 ) {
        ways = 1;
    }
    if ( cell > 1 && cell <= maxJump ) {
        ways = 1 << (cell - 1);
    }
    fprintf(out, "%llu\n", ways);
    return 0;
}
