#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// checks if a given string contains numeric characters
// starting from the given index.
int isNumeric (char str[], int start_i) {
    for (start_i; str[start_i] && str[start_i] != '\n'; start_i++) {
        if (!isdigit(str[start_i])) {
            return 0;
        }
    }
    return 1;
}


// Extracts a source string from a given index and save the
// extracted string in destination string.
char* extractStr (char src[], char dest[], int start_i) {
    int j = 0;
    for (start_i; src[start_i] != '\0'; start_i++ ) {
        dest[j] = src[start_i];
        j++;
    }
    dest[j] = '\0';
    return dest;
}