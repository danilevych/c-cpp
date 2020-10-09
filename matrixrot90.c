#include <stdio.h>

#define SIZE 3

void matrixScan(FILE *in, int matrix[SIZE][SIZE], int size) {
    for ( int row = 0; row < size; row++ ) {
        for ( int col = 0; col < size; col++ ) {
            fscanf(in, "%d", &matrix[row][col]);
        }
    }
}

void matrixRotate90(int target[SIZE][SIZE], int matrix[SIZE][SIZE], int size) {
    int last = size - 1;
    
    for ( int row = 0; row < size; row++ ) {
        for ( int col = last, rotate = 0; col >= 0; col--, rotate++ ) {
            target[row][col] = matrix[rotate][row];
        }
    }
}



void matrixPrint(FILE *out, int matrix[SIZE][SIZE], int size) {
	int last = size - 1;

for ( int i = 0; i < size; i++ ) {
        for ( int j = 0; j < last; j++ ) {
            fprintf(out, "%d     -", matrix[i][j]);
        }
        fprintf(out, "%d\n", matrix[i][last]);
    }
}

int main() {
	FILE *in = fopen("task.in", "r");
	FILE *out = fopen("task.out", "w");

	int matrix[SIZE][SIZE];
	int target[SIZE][SIZE];
	
	int size = 3;
	int last = size - 1;
	int k;


	matrixScan(in, matrix, size);
	
	matrixRotate90(target, matrix, size);

	matrixPrint(out, target, size);

	
	


	fclose(in);
	fclose(out);


	return 0;
}