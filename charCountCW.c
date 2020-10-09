#include <stdio.h>

#define DIF 32

int main() {
	FILE *in = fopen("task.in", "r");
	FILE *out = fopen("task.out", "w");
	char sequence;
	int size = 123;
	int array[size];

	for ( int i = 0; i < size; i++ ) {
		array[i] = 0;
	}


	for ( ; fscanf(in, "%c", &sequence ) == 1; ) {
		if ( sequence >= 'A' && sequence <= 'Z' ) {
			sequence += DIF;
		}
		for ( int i = 97; i < size; i++ ) {
				if ( sequence == i ) {
					array[i] += 1;
	}
		}
		// fprintf(out, "%c", sequence);
	}
	// fprintf(out, "\n" );


	for ( int i = 0; i < size; i++ ) {
		if ( array[i] > 0 ) {
		fprintf(out, "%c %d\n", i, array[i]);
	}
	}

	printf("Done! \n" );

	return 0;
}

