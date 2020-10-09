#include <stdio.h>

int gcd(int a, int b) {
    if ( b == 0 ) {
        return a;
    }
    return gcd(b, a%b);
}

int lcm(int a, int b) {
    return a / gcd(a, b) * b;
}

int main() {
    int min, max, m, n, cache;
    int result;

    scanf("%d %d %d %d", &min, &max, &m, &n);

    if ( min < 0 ) {
        min *= (-1);
    }
    
    // max -= max % min;
    
    result = lcm(m, n);

    cache = min % result;
    if ( cache < 0 ) {
        min -= cache;
    } else if ( cache > 0 ) {
        min = min - cache + result;
    }
    
    for ( ; min <= max; min += result ) {
        printf("%d\n", min);
    }
    
    return 0;
}
