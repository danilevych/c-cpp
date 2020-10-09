// #include <stdio.h>

// int main() {
//     int number, base;
//     int power = 1;
//     int flag = 0;
    
//     scanf("%d %d", &number, &base);

//     if ( number < 0 ) {
//         number *= (-1);
//         flag = 1;
//     }
    
//     for ( int tmp = number; tmp >= base; power *= base, tmp /= base );

//         if ( flag ) {
//             printf("-");
//         }
    
//     for ( ; power >= base; power /= base ) {
//         if ( number / power > 9 && number / power < 17 ) {
//             printf("%c", number/power + 55);
//         } else {
//             printf("%d", number / power );
//         }
//         number %= power;
//     }
//         if ( number / power > 9 && number / power < 17 ) {
//     printf("%c\n", number/power + 55);
//     } else {
//     printf("%d\n", number/power); 
// }


//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int number, base;
//     int power = 1;
//     int flag = 0;
//     int temp;
    
//     scanf("%d %d", &number, &base);
    
//     if ( number < 0 ) {
//         number *= (-1);
//         flag = 1;
//     }
    
//     for ( int tmp = number; tmp >= base; power *= base, tmp /= base );
//     if ( flag ) {
//         printf("-");
//     }
    
//     temp = number / power;
    
//     for ( ; power >= base; power /= base ) {
//         if ( temp > 9 || temp < 0 ) {
//             printf("%c", temp+55);
//         } else {
//             printf("%d", temp);
//         }
//         number %= power;
//     }
//     if ( temp > 9 || temp < 0 ) {
//         printf("%c\n", temp+55);
//     } else {
//         printf("%d\n", temp);
//     }
    
//     return 0;
// }


#include <stdio.h>

int main() {
    int number, base;
    int power = 1;
    int flag = 0;
    
    scanf("%d %d", &number, &base);
    
    if ( number < 0 ) {
        number *= (-1);
        flag = 1;
    }
    
    for ( int tmp = number; tmp >= base; power *= base, tmp /= base );
    if ( flag ) {
        printf("-");
    }
    
    for ( int temp; power >= 1; power /= base ) {
        temp = number / power;
        if ( temp > 9 || temp < 0 ) {
            printf("%c", temp+55);
        } else {
            printf("%d", temp);
        }
        number %= power;
    }
    
    printf("\n");
    
    return 0;
}
