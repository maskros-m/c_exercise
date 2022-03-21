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
		}
	}
}

bool str_starts_with(char str[], char prefix[]) {
	int len_substr = strlen(prefix);
	int len_str = strlen(str);
	bool isPrefix = false;
	
	for (int i = 0; i < len_substr; i++) {
		if (str[i] == prefix[i]) {
			isPrefix = true;
		} else {
			isPrefix = false;
		}
	}
	
	return isPrefix;
}


bool str_ends_with(char str[], char suffix[]) {
	int len_str = strlen(str);
	int len_suf = strlen(suffix);
	bool isSuffix = false;
	
	for (int i = 0; i < len_suf; i++) {
		int j = len_str - len_suf + i;
		if (suffix[i] == str[j]) {
			isSuffix = true;
		} else {
			isSuffix = false;
		}
	}
	return isSuffix;
}


int main() {
  /* Inverting case in a string */
	char inverse_case[] = "Hello World!";
	str_inverse_case(inverse_case);
  
  /* Checking string's prefix */
  	char str[] = "This is a text";
	char substr_1[] = "This is";
	bool res = str_starts_with(str, substr_1);
	if (res == true) printf("true\n");
	else printf("false\n");
	char substr_2[] = "This is a Text.";
	res = str_starts_with(str, substr_2);
	if (res == true) printf("true\n");
	else printf("false\n");	
	char substr_3[] = "This ...";
	res = str_starts_with(str, substr_3);
	if (res == true) printf("true\n");
	else printf("false\n");
	
/* Checking string's suffix */
	char suff[] = "s a text";
	char suff_1[] = " a text.";
	bool result = str_ends_with(str, suff);
	if (result == true) printf("true\n");
	else printf("false\n");
	result = str_ends_with(str, suff_1);
	if (result == true) printf("true\n");
	else printf("false\n");
	
/* */
	
}
