// #include <stdio.h>

void arrayIncrement(int array[], int size, int increment) {
	
	for ( int i = 0; i < size; i++ ) {
		// printf(" BEFORE: %d\n", array[i]);
		   array[i]+=increment;
		   // printf("AFTer: %d\n", array[i]);
	}
}

// void arrayPrint(int array[], int size) {
// 	int last = size - 1;
// 	for ( int i = 0; i < last; i++ ) {
// 		   printf("%d ", array[i]);
// 	}
// 	printf("%d\n", array[last]);
// }

// 	int main() {
// 		int size = 6;
// 		int array[] = { 1, 2, 3, 4, 5, 6 };
// 		int increment = 5;

// 		arrayIncrement(array, size, increment);

// 		arrayPrint(array, size);

// 		return 0;
// 	}
