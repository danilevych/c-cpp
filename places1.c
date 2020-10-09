// #include <stdio.h>

// int main() {
//     int size = 5000000;
//     int chars = 0;
//     char array[size];
    
//     scanf("%s", array);
    
//     for ( ; array[chars] != '\0'; chars++ );

//     printf("%d\n", chars);

    
//     return 0;
// }

#include <stdio.h>

int main() {
    int size = 5000000;
    int chars = 0;
    char array[size];
    
    scanf("%s", array);
    
    for ( ; array[chars] != '\0'; chars++ );
    
    printf("%d\n", chars);
    
    return 0;
}
