#include <stdio.h>

int arrayMax(int array[], int size) {
    int max = array[0];
    
    for ( int i = 1; i < size; i++ ) {
        if ( max < array[i] ) {
        max = array[i];
    }
}
return max;
}

	int main() {
		int size = 5;
		int array[] = { 1, 2, 3, 4, 5 };
	

		printf("%d\n" , arrayMax(array, size));

		return 0;
	}
