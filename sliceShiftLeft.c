void sliceShiftLeft(int array[], int start, int end) {
    if ( start < end ) {
        int temp = array[start];
        
        for ( int index = start; index < end; index++ ) {
            array[index] = array[index+1];
        }
        array[end] = temp;
    }
}
