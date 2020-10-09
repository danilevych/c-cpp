void quickSort( int array[], int lo, int hi) {
	if ( lo >= hi ) {
		return;
	} 

	int fixed = partition( array, lo, hi);

	
	quickSort(array, lo, fixed-1);
	quickSort(array, fixed+1, hi);

	
}


int partition( int array[], int lo, int hi ) {
	int mid = ( lo +hi ) / 2;
	int temp = array[mid];
	int tail = lo;
	array[mid] = array[hi];
	array[hi] = temp;

	for ( ; tail <= hi && array[tail] <= array[hi] ; tail++ );

	for (int i= tail+1; i<hi; i++ ) {
		if ( array[i] < array[hi] ) {
			temp = array[i];
			array[i] = array[tail];
			array[tail] = temp;
			temp += 1;
		}
	}
	
	temp = array[hi];
	array[hi] = array[tail];
	array[tail] = temp;

	return tail;
}

(array, 0, size-1)