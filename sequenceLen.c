#include <stdio.h>

int main() {

FILE *in = fopen("task.in", "r");
FILE *out = fopen("task.out", "w");

char array[100];
char len = 0;

for( ; array[len] != EOF; len++) {
fscanf(in, "%s", array);
}
fprintf(out, "%s\n", array );

fclose(in);
fclose(out);

	return 0;
}
