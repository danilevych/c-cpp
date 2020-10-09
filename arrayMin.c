#include <stdio.h>

int arrayMin(int array[], int size) {
    int min = array[0];
    
    for ( int i = 1; i < size; i++ ) {
        if ( min > array[i] ) {
        min = array[i];
    }
}
return min;
}

	int main() {
		int size = 5;
		int array[] = { 2, 1, 3, 4, 5 };
	

		printf("%d\n" , arrayMin(array, size));

		return 0;
	}
