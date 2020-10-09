#include <stdio.h>

int main() {
    int speed, limit;
    
    scanf("%d %d", &speed, &limit);
    
    if ( limit < speed ) {
        printf("violation\n");
    } else {
        printf("ok\n");
    }
    
    return 0;
}
