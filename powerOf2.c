#include <stdio.h>

// void arrayPrint(int array[], int size) {
// int last = size - 1;
// 	for ( int i = 0; i < last; i++ ) {
// 		   printf("%d ", array[i]);
// 	}
//  	printf("%d\n", array[last]);
//  }

int powerOf2(int exponent){
	return 1 << exponent;

}


 	int main() {
 		// int size = 6;
 		// int array[] = { 1, 2, 3, 4, 5, 6 };
 		// int increment = 5;
 		int exponent;

 		scanf("%d", &exponent);

 		printf("%d\n", powerOf2(exponent));

 		// arrayPrint(array, size);

		return 0;
 	}
