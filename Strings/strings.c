#include <stdio.h>
#include <ctype.h>

void str_inverse_case(char str[]) {
	int len = strlen(str);
	for (short unsigned i = 0; i < len; i++) {
		if (islower(str[i]) != 0) {
			str[i] = isupper(str[i]);
			printf("%c", str[i]);
		} else if (isupper(str[i]) != 0) {
			str[i] = islower(str[i]);
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
}
