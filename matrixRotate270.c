void matrixRotate270(int target[SIZE][SIZE], int matrix[SIZE][SIZE], int size) {
    int last = size - 1;
    
    for ( int row = 0; row < size; row++ ) {
        for ( int col = last, rotate = 0; col >= 0; col--, rotate++ ) {
            target[row][col] = matrix[rotate][row];
        }
    }
}
