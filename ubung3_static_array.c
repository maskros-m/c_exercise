#include <stdio.h>

/***************************
Mi Do (mido.cdq@gmail.com)
- 2AKIFT -

This is the first solution that does not use malloc().
Instead, it uses very basic knowledge and creates
a static array.

***************************/

double calc_resistance (int len, int ar[]) {
	int i;
	double res = 0.0, total_res;
	
	printf("The input resistance values are: ")
	for (i = 0; i < len; i++) {
		res += 1. / ar[i];
		printf("%d ", ar[i]);
	}
	total_res = 1. / res;
	printf("\nThe total resistance R is: %f ", total_res);
	
	return total_res;
}

int len_input() {
	int len, i;
	printf("Enter the number of parallel resistors:\n");
	scanf("%d", &len);
	
	int arr[len];
		
	for (i = 0; i < len; i++) {
		printf("Enter the resistance value for the %d. resistors:\n", i + 1);
		scanf("%d", &arr[i]);
	}
	
	for (i = 0; i < len; i++) {
		printf("%d ", arr[i]);
	}
	
	double totalR;
	totalR = calc_resistance(len, arr);
	
	return 0;
}

void main() {
	len_input();
}