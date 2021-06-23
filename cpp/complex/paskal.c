#include <stdio.h>

int main() {
    int total;
    
    scanf("%d", &total);
    
    for ( ; 1 <= total; total-- ) {
        for ( int col = 1; total > col; col++ ) {
            printf("%d ", col);
        }
        printf("%d\n", total);
    }
    
    return 0;
}
