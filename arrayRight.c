#include <stdio.h>

void arrayRight(int array[], int size) {
    int last = size - 1;
    
    for ( int i = last; i != 0; i-- ) {
        array[i] = array[i-1];
    }
}
 int main() {
  int array[4] = { 1, 2, 3, 4};
  int size;

  arrayRight(array, size);

  return 0;

 }