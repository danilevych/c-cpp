// #include <stdio.h>

// int arrayScan(FILE *in, char array[]) {
//  int amount = 0;

//     for ( ; fscanf(in, "%c", &array[amount]) == 1 ; amount++ );
//     return amount;
// }

// void arrayIncrement(char array[], int amount) {
    
//  for ( int i = 0; i < amount; i++ ) {
//         array[i]-=32;
//         // printf("array[%d]: %c\n", i, array[i]);
//  }
// }

// void arrayPrint(FILE *out, char array[], int amount) {
//  int last = amount - 1;
//  for ( int i = 0; i < last; i++ ) {
//         fprintf(out, "%c", array[i]);
//         printf("array[%d]: %c\n", i, array[i]);
//  }
//  fprintf(out,"%c\n", array[last]);
// }

//  int main() {
//      FILE *in = fopen("task.in", "r");
//      FILE *out = fopen("task.out", "w");
//      int amount = 1000;
//      char array[amount];
        
//         // arrayScan(in, array);
//         // printf("%d\n", arrayScan(in, array));
//         amount = arrayScan(in, array);
//         // printf("%d\n", amount);



//      arrayIncrement(array, amount);

//      arrayPrint(out, array, amount);

//       fclose(in);
//       fclose(out);

//      return 0;
//  }

#include <stdio.h>

int arrayScan(FILE *in, char array[]) {
    int amount = 0;
    
    for ( ; fscanf(in, "%c", &array[amount]) == 1; amount++ );
    
    return amount;
}

void arrayIncrement(char array[], int amount) {
    for ( int i = 0; i < amount; i++ ) {
        if ( array[i] >= 65 && array[i] <= 90 ) {
        array[i] += 32;
    }
    }
}

void arrayPrint(FILE *out, char array[], int amount) {
    int last = amount - 1;
    
    for ( int i = 0; i < last; i++ ) {
        fprintf(out, "%c", array[i]);
    }
    fprintf(out, "%c\n", array[last]);
}

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    int amount = 1000000;
    char array[amount];
    
    amount = arrayScan(in, array);
    
    arrayIncrement(array, amount);

    arrayPrint(out, array, amount);
    
    fclose(in);
    fclose(out);
    
    return 0;
}

// #include <stdio.h>

// int main() {
//     FILE *in = fopen("task.in", "r");
//     FILE *out = fopen("task.out", "w");
//     char a;
    
//     for ( ; fscanf(in, "%c", &a) == 1; ) {
//         if ( a >= 'a' && a <= 'z' ) {
//             a -= 32;
//         }
//         fprintf(out, "%c", a);
//     }
//     fprintf(out, "\n");
    
//     return 0;
// }
