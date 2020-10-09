#include <stdio.h>

void arrayCopy(int destination[], int source[], int size) {
    for ( int i = 0; i < size; i++ ) {
        destination[i] = source[i];
}
}

	int main() {
		int size = 5;
		int array[] = { 2, 1, 3, 4, 5 };
	

		printf("%d\n" , arrayCopy(destination, source, size));

		return 0;
	}
