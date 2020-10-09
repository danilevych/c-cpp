#include <stdio.h>

int gcd(int a, int b) {
	if ( b == 0 ) {
		return a;
	}
	return gcd( b, a % b );
}

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    int size = 2;
    int array[size];
    
    for ( int i = 0; i < size; i++ ) {
        fscanf(in, "%d", &array[i]);
    }
    
    fprintf(out, "%d\n", (array[0]*array[1])/gcd(array[0], array[1]));
    
    fclose(in);
    fclose(out);
    
    return 0;
}
