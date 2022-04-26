#include <stdio.h>
#include <math.h>
#define MAX 255
int main()
{
    char binary[MAX];
    scanf("%s", binary);
    
    int i, count = 0, decimal = 0;
    
    printf("Binary number provided: ");
    for (i = 0; binary[i] != '\0'; i++) {
        printf("%c", binary[i]);
        count++;
    }
    
    printf("\nNumber of digits: %d\n", count);
    
    for(i = 0; i < count; i++) {
        if (binary[i] == '1') {
            decimal += pow(2, count-1-i);
        }
    }
    printf("Decimal value: %d\n", decimal);
    return 0;
}