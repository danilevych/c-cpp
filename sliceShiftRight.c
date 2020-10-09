#include <stdio.h>

void sliceShiftRight(int array[], int start, int end) {
    if ( start < end ) {
        int temp = array[end];

        
        for ( int index = end; start < index; index-- ) {
        	printf("array[%d]=%d\n", index, array[index]);
            array[index] = array[index-1];
            printf("array[%d]=%d\n", index, array[index]);
        }
        array[start] = temp;
        printf("%d\n", array[start]);
    }
}

int main() {

	int array[6];
	int start = 2;
	int end = 4;

	for ( int i = 0; i < 6; i++ ) {
		scanf("%d", &array[i]);
	}

	sliceShiftRight(array, start, end);

	for ( int i = 0; i < 6; i++ ) {
		printf("%d_", array[i]);
	}
	printf("\n");
	return 0;
}