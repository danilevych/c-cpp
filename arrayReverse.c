// #include <stdio.h>

// void arrayReverse(int array[], int size) {
// 	int last = size - 1;
// 	int counter = size/2;
// 	int buf = 0;

//     for ( int i = 0; i < counter; i++, last-- ) {
//         buf = array[i];
//         array[i] = array[last];
//         array[last] = buf;
// }
// }



// 	int main() {
// 		int size = 5;
// 		int array[] = { 1, 2, 3, 4, 5 };
	

// 		arrayReverse(array, size);

// for ( int i = 0; i < size; i++ ) {
// 	printf("%d\n", array[i]);
// }

// 		return 0;
// 	}

// void arrayReverse(int array[], int size) {
//     int last = size - 1;
    
//     for ( int i = 0, buf = 0; i < last; i++, last-- ) {
//         buf = array[i];
//         array[i] = array[last];
//         array[last] = buf;
//     }
// }

void arrayReverse(int array[], int size) {
    for ( int i = 0, j = size - 1; i < j; i++, j-- ) {
        int tmp = array[i];
        
        array[i] = array[j];
        array[j] = tmp;
    }
}

