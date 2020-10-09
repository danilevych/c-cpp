// #include <stdio.h>

// int main() {
// 	int len;

// 	scanf("%d", &len);

// 	int array[len];

// 	for( int i = 0; i < len; i++ ) {
// 		scanf("%d", &array[i]);
// 	}

// 	for ( int i = 0; i < len; i++ ) {
// 		// printf("array[%d] = %d\n", i, array[i]);
// 		printf("%d\n", array[i] ^ 42);
// 	}

// 	return 0;
// }

#include <stdio.h>

int main() {
    int len;
    int size = 1000;
    int array[size];
    // printf("len - %d\n", len);
    scanf("%d", &len);
    
    for ( int i = 0; i < len; i++ ) {
        scanf("%d", &array[i]);
    }
    for ( int i = 0; i < len; i++ ) {
        printf("%d\n", array[i]^42);
    }
    return 0;
}
