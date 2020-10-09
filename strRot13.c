// #include <stdio.h>

// void strRot13(char str[]) {
//     for ( int i = 0, tmp = str[0]; tmp != '\0'; i++ ) {
//         tmp = str[i];
        
//         if ( tmp >= 'A' && tmp <= 'M' ) {
//             str[i] += 13;
//         } else if ( tmp >= 'N' && tmp <= 'Z' ) {
//             str[i] -= 13;
//         } else if ( tmp >= 'a' && tmp <= 'm' ) {
//             str[i] += 13;
//         } else if ( tmp >= 'n' && tmp <= 'z' ) {
//             str[i] -= 13;
//         }
//     }
// }

// int main() {
//     FILE *in = fopen("task.in", "r");
//     FILE *out = fopen("task.out", "w");
//     int size = 100;
//     char str[size];
//     int amount = 0;
//     int last;
    
//     for ( int i = 0; i < size && fscanf(in, "%c", &str[i]) == 1; i++ ) {
//         amount += 1;
//     }
    
//     last = amount - 1;
    
//     strRot13(str);
    
//     for ( int i = 0; i < last; i++ ) {
//         fprintf(out, "%c", str[i]);
//     }
//     fprintf(out, "%c\n", str[last]);
    
//     fclose(in);
//     fclose(out);
    
//     return 0;
// }
// 10\11 test passed

#include <stdio.h>

void strRot13(char str[]) {
    for ( int i = 0, tmp = str[0]; tmp != '\0'; i++ ) {
        tmp = str[i];
        
        if ( tmp >= 'A' && tmp <= 'M' ) {
            str[i] += 13;
        } else if ( tmp >= 'N' && tmp <= 'Z' ) {
            str[i] -= 13;
        } else if ( tmp >= 'a' && tmp <= 'm' ) {
            str[i] += 13;
        } else if ( tmp >= 'n' && tmp <= 'z' ) {
            str[i] -= 13;
        }
    }
}

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    int size = 101;
    char str[size];
    
    fscanf(in, "%100s", str);
    
    strRot13(str);
    
    fprintf(out, "%s\n", str);
    
    fclose(in);
    fclose(out);
    
    return 0;
}
