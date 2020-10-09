#include <stdio.h>

int fibonacci(int n) {
    int x = 1;
    int y = 0;
    
    if ( n > 0 ) {
        for ( int i = 0; i < n; i++ ) {
            x += y;
            y = x - y;
        }
    }
    
    return y;
}

int fibonacci1(int n) {
    int x = 1;
    int y = 0;
    int result;
    
    if ( n < 0 ) {
        n *= (-1);
        for ( int i = 0; i < n; i++ ) {
            x += y;
            y = x - y;
            result = y;
            
            if ( n == 1 ) {
                result = 1;
            }
            if ( n % 2 == 0 ) {
                result = -y;
            }
        }
    }
    return result;
}

int main() {
    int n;
    
    scanf("%d", &n);
    
    if ( n >= 0 ) {
        printf("%d\n", fibonacci(n));
    } else {
        printf("%d\n", fibonacci1(n));
    }
    
    return 0;
}

