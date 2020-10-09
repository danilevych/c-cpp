#include <stdio.h>

void arrayAbs(int array[], int size) {
    for ( int i = 0; i < size; i++ ) {
        if ( array[i] < 0 ) {
            array[i] *= -1;
        }
    }
}


	int main() {
		int size = 5;
		int array[] = { 2, 1, 3, 4, 5 };
	

		printf("%d\n" , arrayAbs(array, size));

		return 0;
	}
