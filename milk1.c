#include <stdio.h>

#define MAXPRICE 1000

void arrayZero(long long unsigned array[], int size) {
    for ( long long unsigned i = 0; i < size; i++ ) {
        array[i] = 0;
    }
}

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    int fermerQuantity;
    int size = MAXPRICE + 1;
    int amount, price;
    long long unsigned amountNeeded;
    long long unsigned minPrice = 0;
    long long unsigned array[size];
    long long unsigned counter = 0;
    long long unsigned result = 0;
    long long unsigned milk = 0;
    
    fscanf(in, "%d %llu", &fermerQuantity, &amountNeeded);
    
    arrayZero(array, size);
    
    for ( ; fscanf(in, "%d %d", &amount, &price) != EOF; ) {
        array[price] += amount;
        milk += amount;
    }
    
    if ( amountNeeded > milk ) {
        fprintf(out, "0\n");
        return 0;
    }
    for ( int i = 0; counter < amountNeeded; i++ ) {
        counter += array[i];
        
        if ( counter > amountNeeded ) {
            result = counter - amountNeeded;
            array[i] -= result;
        }
        printf("MP=%llu\n", minPrice);
        minPrice += array[i] * i;
    }
    fprintf(out, "%llu\n", minPrice);
    
    fclose(in);
    fclose(out);
    
    return 0;
}
