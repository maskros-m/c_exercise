#ifndef CLI_H
#define CLI_H

// checks if a given string contains numeric characters
// starting from the given index.
int isNumeric (char str[], int start_i);

// Extracts a source string from a given index and save the
// extracted string in destination string.
char* extractStr (char src[], char dest[], int start_i);

#endif