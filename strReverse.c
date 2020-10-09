#include <stdio.h>

void strReverse(char str[], int size) {
    for ( int i = 0, j = size - 1; i < j; i++, j-- ) {
        int tmp = str[i];
        
        str[i] = str[j];
        str[j] = tmp;
    }
}

int strLen(char str[]) {
    int len = 0;
    
    for ( ; str[len] != '\0'; len++ );
    return len;
}

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    int size = 99;
    char str[size];
    char len = 0;
    
    fscanf(in, "%s", str);
    len = strLen(str);
    strReverse(str, len);
    fprintf(out, "%s\n", str);
    
    fclose(in);
    fclose(out);
    
    return 0;
}
