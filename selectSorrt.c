#include <stdio.h>

void selectSort(int array[], int size) {

	for ( int i = 0; i < size; i++ ) {
		for ( int j = 0; j < size; j++ ) {
			int min = array[j];
			if ( array[j] > array[j+1] ) {
				min = array[j+1];

				int temp = array[j];
				array[j] = min;
				array[j+1] = temp;
			}
		}
	}
}

int main() {
        int size = 6;
        int array[] = { 8, 11, 2, 3, 6, 89 };
    

        selectSort(array, size);

for ( int i = 0; i < size; i++ ) {
    printf("%d__", array[i]);
}
printf("\n");

return 0;
}
