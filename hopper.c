#include <stdio.h>

int power(int value) {
	return 1 << value;
}

int main() {

FILE *in = fopen("task.in", "r");
FILE *out = fopen("task.out", "w");
int maxJump, cell;
int ways = 0;
int dif = 0;
int array[maxJump-1];
array[0] = 1;

fscanf(in, "%d %d", &maxJump, &cell);

dif = cell - 1;


if ( maxJump == 1 || cell == 1 ) {
	ways = 1;
}
if ( maxJump == 1 && cell == 1 ) {
	ways = 1;
}
if ( cell > 1 && cell <= maxJump ) {
	ways = power(cell -1);
}
if ( cell == maxJump + 1 ) {
	ways = power(cell - 1) - 1;
}

if ( cell > maxJump + 1 ) {
	printf("cell-%d\n", cell);
	for ( int i = cell - 1, j = 1, sum = 1; i > 0; i--, j++ ) {
        array[j] = sum;
        sum += sum;
        // printf("--%d\n", i);
        printf("i-%d j-%d sum-%d array[j]-%d cell-%d\n",i, j, sum, array[j], cell);
	}
}


// for ( int i = 0; i < cell; i++ ) {
// fprintf(out, "%d\n", array[i]);
// }



fprintf(out, "%d\n", ways);



fclose(in);
fclose(out);

return 0;
}
