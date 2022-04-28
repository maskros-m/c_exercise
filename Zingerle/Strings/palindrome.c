/* 
	March 30, 2022
	Palindrome

*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define LEN 255

struct sPers // Strukturdeklaration
{
	char VName[LEN];
	char NName[LEN];
	int KNr;
};



void main() {

	char str[LEN];
	fgets(str, LEN, stdin);
	// char str[] = "Die Liebe ist Sieger, stets rege ist sie bei Leid"; // "Ein Esel lese nie";
	char* str2 = (char*)malloc(strlen(str) * sizeof(char));
	strcpy(str2, str);
	int isPalindrome = 0, i, j;


	for (i = 0; str[i] != '\0'; ++i) {
		str[i] = tolower(str[i]);

	}

	for (i = 0; str[i] != '\0'; ++i) {
		while (!(str[i] >= 'a' && str[i] <= 'z') && !(str[i] == '\0')) {
			for (j = i; str[j] != '\0'; ++j) {
				str[j] = str[j + 1];
			}
			str[j] = '\0';
		}
	}
	// printf("%s\n", str);

	for (i = 0; i < strlen(str) / 2; ++i) {
		if (str[i] == str[strlen(str) - 1 - i]) isPalindrome = 1;
		else { isPalindrome = 0; break; }
	}

	if (isPalindrome == 0) printf("'%s' is not a palindrome", str2);
	else printf("'%s' is a palindrome", str2);

	// free(str2);
}