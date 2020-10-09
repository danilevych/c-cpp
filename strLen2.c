#include <stdio.h>

int strLen(char str[]) {
    int len = 0;
    
    for ( ; str[len] != '\0'; len++ );
    return len;
}

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    int size = 500000;
    char str[size];
    
    fscanf(in, "%s", str);
    fprintf(out, "%d\n", strLen(str));
    fclose(in);
    fclose(out);
    
    return 0;
}
