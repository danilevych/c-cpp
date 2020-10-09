#include <stdio.h>

int arraySearch(int array[], int size, int needle) {

    for ( int i = 0; i < size; i++ ) {
        if ( needle == array[i] ) {
            return i;
        }
    }
    return -1;
}


int main() {
		int size = 5;
		int array[] = { 1, 2, 3, 2, 5 };
		int needle;

		scanf("%d", &needle);
	

		printf("%d\n" , arraySearch(array, size, needle));

		return 0;
	}

