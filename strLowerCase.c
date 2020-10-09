void strLowerCase(char str[]) {
    for ( int i = 0, tmp = str[0]; tmp != '\0'; i++ ) {
        tmp = str[i];
        if ( tmp >= 'A' && tmp <= 'Z' ) {
            str[i] += 32;
        }
    }
}
    