#include <stdio.h>

int main() {
    int a;
    int check = 0;
    
    scanf("%d", &a);
    printf("%d\n", check);
    if ( a % 2 == 0 ) {
        printf("alpha\n");
        check = 1;
    }
    printf("%d\n", check);
    if ( a % 3 == 0 ) {
        printf("bravo\n");
        check = 1;
    }
    printf("%d\n", check);
    if ( a % 5 == 0 ) {
        printf("charlie\n");
        check = 1;
    }
    printf("%d\n", check);
    if ( check == 0 ) {
        printf("zulu\n");
    }

    printf("%d\n", check);

    return 0;
}
