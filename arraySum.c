// #include <stdio.h>

int arraySum(int array[], int size) {
    int sum = array[0];
    
    for ( int i = 1; i < size; i++ ) {
        sum += array[i];
    }
    return sum;
}

	// int main() {
	// 	int size = 5;
	// 	int array[] = { 1, 2, 3, 4, 5 };
	

	// 	printf("%d\n" , arraySum(array, size));

	// 	return 0;
	// }
