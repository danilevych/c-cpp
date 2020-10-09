#include <stdio.h>


// void arrayMerge(int* target, int src1[], int len1, int src2[], int len2) {
//     int i = 0;
//     int j = 0;
//     int k = 0;

//     for ( ; i < len1 && j < len2; k++ ) {
//         if ( src1[i] <= src2[j] ) {
//             target[k] = src1[i];
//             i += 1;
//         } else {
//             target[k] = src2[j];
//             j += 1;
//         }
//     }
    
//     for ( ; j < len2; j++, k++ ) {
//         target[k] = src2[j];
//     }
//     for ( ; i < len1; i++, k++ ) {
//         target[k] = src1[i];
//     }
// }

void merge( int array[], int lo, int mid, int hi) {
	int i = lo;
	int j = mid;
	int k = 0;
	int size = hi - lo;
	int temp[size];

	for( ; i < mid && j < hi; k ++ ) {
		if ( array[i] <= array[j] ) {
			temp[k] = array[i];
			i += 1;
		} else {
			temp[k] = array[j];
			j += 1;
		} 

		}

		for ( ; i < mid; i++, k++ ) {
			temp[k] = array[i];
		}

  		for ( ; j < hi; j++, k++ ) {
			temp[k] = array[j];
		}

		for( k = 0, i = lo; i < hi ;i++, k++ ) {
			array[i] = temp[k];
		}

}

void mergeSort( int array[], int len) {
	if ( len < 2 ) {
		return;
	} else {
		int lo = 0;
		int mid =  len / 2;
		int hi = len;
		int temp1[mid];
		int temp2[len];
		

		for ( int i = lo, k = 0; i < mid; i++, k++ ) {
			temp1[k] = array[i];

			// printf("%d[%dk]-[%di] &\n", temp1[k], k, i);


		}
		// printf("____________\n");

		// mergeSort(array, len);

		for ( int j = mid, f = 0; j < hi; j++, f++ ) {
			temp2[f] = array[j];
			// printf("%d[%df]-[%dj] --\n", temp2[f], f, j);
		}
		// printf("_____________\n");


		mergeSort(temp1, mid); 
		mergeSort(temp2, hi-mid);
		merge(array, lo, mid, hi-mid);
	}
}

int main() {
	FILE *in = fopen("task.in", "r");
	FILE *out = fopen("task.out", "w");

	int len;
	int array[len];
    // int end1 = 3;
    // int end2 = 4;
    // int temp1[] = {1,2,4}; 
    // int temp2[] = {1,5,7,8};
    

    fscanf(in, "%d", &len);

    for ( int i = 0; i < len; i++ ) {
        fscanf(in, "%d", &array[i]);
    }
    
    
    
	mergeSort(array, len);
	// arrayMerge(array, temp1, end1, temp2, end2);



for ( int i = 0; i < len; i++ ) {
fprintf(out, "%d ", array[i]);
}




printf("\n");

fclose(in);
fclose(out);

return 0;

}




// #include <stdio.h>

// void arrayMerge(int* target, int src1[], int len1, int src2[], int len2) {
//     int i = 0;
//     int j = 0;
//     int k = 0;

//     for ( ; i < len1 && j < len2; k++ ) {
//         if ( src1[i] <= src2[j] ) {
//             target[k] = src1[i];
//             i += 1;
//         } else {
//             target[k] = src2[j];
//             j += 1;
//         }
//     }
    
//     for ( ; j < len2; j++, k++ ) {
//         target[k] = src2[j];
//     }
//     for ( ; i < len1; i++, k++ ) {
//         target[k] = src1[i];
//     }
// }

// void mergeSort( int array[], int len) {
//     if ( len < 2 ) {
//         return;
//     } else {
//         int start1 = 0;
//         int end1 = len / 2;
//         int start2 =  len / 2;
//         int end2 = len;
//         int temp1[end1];
//         int temp2[end2];
        
//         for ( int i = start1, k = 0; i < end1; i++, k++ ) {
//             temp1[k] = array[i];
//         }
		
//         for ( int j = start2, f = 0; j < end2; j++, f++ ) {
//             temp2[f] = array[j];
//         }
        
//         mergeSort(temp1, end1);
//         mergeSort(temp2, len-end1);
//         arrayMerge(array, temp1, end1, temp2, len-end1);
//     }
// }

// int main() {
//     FILE *in = fopen("task.in", "r");
//     FILE *out = fopen("task.out", "w");

// 	int len;
// 	int array[];
        
//         fscanf(in, "%d", &len);
    
//     for ( int i = 0; i < len; i++ ) {
//         fscanf(in, "%d", &array[i]);
//     }
    
//     mergeSort(array, len);
    
//     for ( int i = 0; i < len; i++ ) {
//         fprintf(out, "%d ", array[i]);
//     }
    
//     fclose(in);
//     fclose(out);
    
//     return 0;
// }
