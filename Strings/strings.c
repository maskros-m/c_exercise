#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

void str_inverse_case(char str[]) {
    int len = strlen(str);
    for (short unsigned i = 0; i < len; i++) {
        if (islower(str[i]) != 0) {
	    str[i] = toupper(str[i]);
	    printf("%c", str[i]);
	} else if (isupper(str[i]) != 0) {
	    str[i] = tolower(str[i]);
	    printf("%c", str[i]);
	} else {
	    printf("%c", str[i]);
	}
    }
}

bool str_starts_with(char str[], char prefix[]) {
    int len_substr = strlen(prefix);
    int len_str = strlen(str);
    bool isPrefix = false;

    for (int i = 0; i < len_substr; i++) {
	if (str[i] == prefix[i]) { isPrefix = true; } 
	else { isPrefix = false; break; } 		// "break" (keyword): stops iteration immediately as soon as a character returns as unmatched (important!)
    }
    return isPrefix;
}

bool str_ends_with(char str[], char suffix[]) {
    int len_str = strlen(str);
    int len_suf = strlen(suffix);
    bool isSuffix = false;
	
    for (int i = 0; i < len_suf; i++) {
	int j = len_str - len_suf + i; 		// Finds the relationship between j and i, so that the value of j would be automatically incremented as i increases. 
	if (suffix[i] == str[j]) { isSuffix = true; } 
	else { isSuffix = false; break; }
    }
    return isSuffix;
}

int str_count (char str[], char sub[]) {
    int i = 0, occurrence = 0;
    bool isSubstring = false;
    while (str[i] != '\0') {
        if (str[i] == sub[0]) {
            int ind = i; 			// makes a copy of i so that the value of i is retained for the next while loop iteration. Else won't work correctly.
            for (int j = 1; j < strlen(sub); j++) {
                if (sub[j] == str[++ind]) {isSubstring = true; } // ind must be incremented BEFORE use, thus ++ind (ind++ won't work correctly).
                else {isSubstring = false;}
            }
            if (isSubstring == true) { occurrence++; }
        }
        i++;
    }
    return occurrence;
}

bool str_is_ascii(char str[]) {
    bool isAscii = true;
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] < 0 || str[i] > 127) {isAscii = false; break; }  // extended ascii characters will fall out of this range
    }
    return isAscii;
}

bool str_is_digit(char str[]) {
    bool isDigit = true;
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] < 48 || str[i] > 57) {isDigit = false; break; }
    }
    return isDigit;
}

int str_index(char str[], char sub[]) {
    int index, isSubstr = 0;
    for (int i = 0; i < strlen(str); i++) {
	if (str[i] == sub[0]) {
	    index = i;
            for (int j = 1; j < strlen(sub); j++) {
		if (sub[j] == str[++i]) {isSubstr = 1; }
		else {isSubstr = 0; break;}
	    }
	}
	if (isSubstr == 1) {break; }	// necessary condition to stop for loop as soon as the first match occurs. Else won't return first index if there're more than one occurrence.
    }
    if (isSubstr == 0) {return -1; }
    else {return index; }
}

int main() {
    /* Reverse case of a given string */
    char inverse_case[] = "Hello World!";
    str_inverse_case(inverse_case);
    printf("\n");
	
    /* Check if a given string starts with a given substring */
    char str0[] = "Hello";
    char substr_0[] = "Hill"; // --> false
    bool res = str_starts_with(str0, substr_0);
    if (res == true) printf("true\n");
    else printf("false\n");
	
    char str[] = "This is a text";
    char substr_1[] = "This is"; // --> true
	
    res = str_starts_with(str, substr_1);
    if (res == true) printf("true\n");
    else printf("false\n");
	
    char substr_2[] = "This is a Text."; // --> false
    res = str_starts_with(str, substr_2);
    if (res == true) printf("true\n");
    else printf("false\n");	
	
	
    /* Check if a given string ends with a given substring */
    char test_str[] = "This is a text";
    char suff_0[] = "s a tixt"; // --> false
    bool result = str_ends_with(test_str, suff_0);
    if (result == true) printf("true\n");
    else printf("false\n");
	
    char suff[] = "s a text"; // --> true
    result = str_ends_with(test_str, suff);
    if (result == true) printf("true\n");
    else printf("false\n");
	
    char suff_1[] = " a text."; // --> false
    result = str_ends_with(test_str, suff_1);
    if (result == true) printf("true\n");
    else printf("false\n");
	
    /* Count how many times a substring occurs in a given string */
    char str1[] = "Hihihihihi";
    char substr1[] = "ihihi"; // --> 3
    printf("%d\n", str_count(str1, substr1));
	
    char substr0[] = "Bwihihi"; // --> 0
    printf("%d\n", str_count(str1, substr0));
	
    char str2[] = "Hello";
    char substr2[] = "He"; // --> 1
    printf("%d\n", str_count(str2, substr2));
	
    /* Check if a string contains only ASCII rather than extended-ASCII characters*/
    char ascii_str[] = "This is a fully valid ascii string!";
    bool isAscii = str_is_ascii(ascii_str); // --> true
    if (isAscii == true) printf("true\n");
    else printf("false\n");
	
    char ext_ascii[] = "There's no such thing as a £0-lunch.";
    isAscii = str_is_ascii(ext_ascii); // --> false
    if (isAscii == true) printf("true\n");
    else printf("false\n");
	
    char more_ext_ascii[] = "Müller is a common German last name.";
    isAscii = str_is_ascii(more_ext_ascii); // --> false
    if (isAscii == true) printf("true\n");
    else printf("false\n");
	
    /* Check if a string contains only digits */
    char phonenumber[] = "06641234567";
    bool isDigit = str_is_digit(phonenumber); // --> true
    if (isDigit == true) printf("true\n");
    else printf("false\n");
	
    char phonyphone[] = "0664 123 4567"; // --> false
    isDigit = str_is_digit(phonyphone);
    if (isDigit == true) printf("true\n");
    else printf("false\n");
	
    char postcode[] = "B15 7LN"; // --> false
    isDigit = str_is_digit(postcode);
    if (isDigit == true) printf("true\n");
    else printf("false\n");
	
    char zipcode[] = "8051"; // --> true
    isDigit = str_is_digit(zipcode);
    if (isDigit == true) printf("true\n");
    else printf("false\n");
	
	
    /* Returns the index of first occurrence of a substring in a string.
    Else returns -1.*/
    char str_0[] = "Hello Beauty!";
    char sub_0[] = "Beauty";
    printf("%d\n", str_index(str_0, sub_0)); // --> 6


    char str_1[] = "Whatyouseeiswhatyouget";
    char sub_1[] = "ya";
    printf("%d\n", str_index(str_1, sub_1));  // --> -1
    
    char str_2[] = "Bantantantant"; 
    char sub_2[] = "ant";
    printf("%d\n", str_index(str_2, sub_2));  // --> 1
}
