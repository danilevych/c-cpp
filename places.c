#include <stdio.h>

int main() {
    int number;
    int counter = 0;
    
    scanf("%d", &number);
    
    if ( number == 0 ) {
        printf("1\n");
    } else {
        for ( int i = 1; number != 0; i++ ) {
            number /= 10;
            counter += 1;
            if ( number < 0 ) {
                counter += 1;
            }
        }
        printf("%d\n", counter);
    }
    
    return 0;
}
