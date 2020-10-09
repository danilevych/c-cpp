#include <stdio.h>

int main() {
	FILE *in = fopen("task.in", "r");
	FILE *out = fopen("task.out", "w");
	int size = 100;
	int array[size];
	int len = 0;
    int amount = 0;
    int counter = 0;

	for ( ; len < size && fscanf(in, "%1d", &array[len]) == 1; len++ );

	printf("len=%d\n", len);

    for ( int i = 0; i < len; i++ ) {
    	if ( array[i] == 0 ) {
    		amount += 1;
    	}
    }

    for ( int j = 0; j < amount; j++ ) {
    	if ( array[j] == 1 ) {
    		counter += 1;
    	}
    }

    printf("counter=%d\n", counter);
	fprintf(out, "counter=%d\n", counter);

    fclose(in);
    fclose(out);

	return 0;
}

