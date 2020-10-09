#include <stdio.h>

void bubbleSort(int array[], int size) {
	int tmp;

	for ( i = 0; i < size; i++ ) {
		if ( array[0] > array[i+1] ) {
			for ( int j = 0; j < size; j++ ) {
				tmp = array[j];
				array[j] = array[j+1];
			}
		}
	}
}

int main() {
        int size = 4;
        int array[] = { 8, 11, 2, 3 };
    

        arraySort(array, size);

for ( int i = 0; i < size; i++ ) {
    printf("%d__", array[i]);
}
printf("\n");

return 0;
}
