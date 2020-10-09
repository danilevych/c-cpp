#include <stdio.h>

int main() {
    int number;
    
    scanf("%d", &number);
    
    if ( number % 2 == 0 ) {
        printf("%d\n", number);
    } else {
        printf("%d\n", number+1);
    }
    return 0;
}
