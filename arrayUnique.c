#include <stdio.h>

int arrayUnique(int array[], int size) {
    int last = size - 1;
    int counter = 0;
    
    if ( size > 1 ) {
        for ( int i = 0; i < size; i++ ) {
            for ( int j = 0, tmp = 0; j < last; j++ ) {
                if ( array[j] > array[j+1] ) {
                    tmp = array[j];
                    array[j] = array[j+1];
                    array[j+1] = tmp;
                }
            }
        }

        for ( int r = 0; r < size; r++ ) {
        	int tmp = array[r];
        	
        	if ( array[r] = array[r+1] ) {
        		array[r] = array[r+1];
        	}
        	array[last] = tmp;
        }
        
        for ( int k = 0; k < size; k++ ) {
            if ( array[k] != array[k+1] ) {
                counter += 1;
            }
        }
    } else {
        counter = 1;
    }
    return counter;
}



int main() {
	int size = 5;
	int array[] = { 1, 1, 7, 1, 2 };
	int new = size;

	arrayUnique(array, size);




	// printf("NEW=%d\n", new);

	for ( int i = 0; i < size; i++ ) {
		printf("%d\n", array[i]);
	}




	return 0;
}