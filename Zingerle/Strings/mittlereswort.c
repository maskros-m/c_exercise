/* Reminder: Ask lecturer which one should be printed if the number of words is even. 
Why on earth do I need three loops just to get this exercise done? X_X
*/

#include <stdio.h>
#include <string.h>

int main() {
    char arr[] = "Graz Wien Salzburg"; // replace with fget or gets or whatever
    int count = 0, mid, i;
    
    for (i = 0; i < strlen(arr); i++) {
        if (arr[i] == ' ') count++;
    }
    
    mid = count / 2;
    count = 0;
    
    for (i = 0; i < strlen(arr); i++) { 
        if (arr[i] == ' ') {
            count++;
            if (count == mid) {
                i++;
                break;
            }
        }
    }
    
    while(arr[i] != ' ') {
        // if (arr[i] == ' ') break;
        printf("%c", arr[i]);
        i++;
    }

    return 0;
}
