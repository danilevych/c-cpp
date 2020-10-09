#include <stdio.h>

void arrayZeroFill(int array[], int size) {
    
    for ( int i = 0; i < size; i++ ) {
        array[i] = 0;
    }
}

int main () {
	int size = 10;
	int array[size];

	arrayZeroFill(array, size);

	for (int i = 0; i < 15; i++ ) {
		printf("%d\n", array[i]);
	}




	return 0;
}