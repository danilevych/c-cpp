#include <stdio.h>

int main() {
    int total;
    
    scanf("%d", &total);
    
    for ( int i = 0, counter = 1; i < total; i++ ) {
        for ( int j = 0, sum = 1; j < i; j++ ) {
            
            printf("%d_", sum);
            sum += sum;
        }
        printf("1\n");
    }
    
    return 0;
}
