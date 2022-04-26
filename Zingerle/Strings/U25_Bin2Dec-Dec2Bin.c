/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define MAX 255
#define MIN 100
int main()
{
    char numtype, bin[MAX], dec[MIN], convertedbin[MAX];

    int i, count = 0, decimal = 0;
    
    printf("b: convert a binary to decimal; d: convert a decimal to binary.\n");
    scanf("%c", &numtype);
    
    if (numtype == 'b') {
        scanf("%s", bin);
        
        printf("Binary number provided: ");
        for (i = 0; bin[i]; i++) {
            printf("%c", bin[i]);
            count++;
        }
        
        for (i = 0; i < count; i++) {
            decimal += pow(2, count-1-i);
        }
        printf("\nDecimal value: %d", decimal);
    } else if (numtype == 'd') {
    
        scanf("%s", dec);
        
        int decimalnum = atoi(dec), digit;
        count = 0;
        
        while (decimalnum / 2) {
            digit = decimalnum % 2;
            if (digit == 0) convertedbin[count] = '0';
            else if (digit == 1) convertedbin[count] = '1';
            count++;
            decimalnum /= 2;
        }
        
        // printf("%d %d", decimalnum, count);
        
        printf("\nConverted binary value: ");
        printf("%d", decimalnum);
        for(i = 0; i < count; i++) {
            printf("%c", convertedbin[count-1-i]);
        }
    }
    
    
    return 0;
}
