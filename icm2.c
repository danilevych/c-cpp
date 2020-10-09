// #include <stdio.h>

// int gcd(int a, int b) {
//     if ( b == 0 ) {
//         return a;
//     }
//     return gcd(b, a%b);
// }

// int main() {
//     FILE *in = fopen("task.in", "r");
//     FILE *out = fopen("task.out", "w");

//     int a, b;

//     fscanf(in, "%d %d", a, b);

//     fprintf(out, "%d\n", a*b/gcd(a,b));

//     fclose(in);
//     fclose(out);

//     return 0;
// }

// #include <stdio.h>

// int gcd(int a, int b) {
//     if ( b == 0 ) {
//         return a;
//     }
//     return gcd(b, a%b);
// }

// int main() {
//     FILE *in = fopen("task.in", "r");
//     FILE *out = fopen("task.out", "w");
//     int a, b;
//     int result;
    
//     fscanf(in, "%d %d", &a, &b);
    
//     result = a * b / gcd(a, b);
    
//     fprintf(out, "%d\n", result);
    
//     fclose(in);
//     fclose(out);
    
//     return 0;
// }

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
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    int a, b;
    
    fscanf(in, "%d %d", &a, &b);
    
    fprintf(out, "%d\n", lcm(a, b));
    
    fclose(in);
    fclose(out);
    
    return 0;
}

