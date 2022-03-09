#include <stdio.h>
#include <stdlib.h>

/***************************
Mi Do (mido.cdq@gmail.com)
- 2AKIFT -

This is the second solution that uses malloc()
to accommodate dynamically created array.

** There is another version of this solution with
an added function to get the desired length of 
array (or the number of parallel resistors). Please
scroll down to the bottom for the commented out section.

***************************/
double calc_resistance (int len, int ar[]) {
	int i;
	double res = 0.0, total_res;
	
	printf("The input resistance values are: ");
	for (i = 0; i < len; i++) {
		printf("%d ", ar[i]);
		res += 1. / ar[i];  // ar[i] is int, so it needs to be typecast/ converted to float.
							// either by using explicit (double) or implicit typecasting
							// by converting 1 to float value (1.)
							// If not, the result of the division will be promoted to type int
	}
	total_res = 1. / res;
	printf("\nThe total resistance is: %f ", total_res);
	
	return total_res;
}

int get_resistances() {
	int len, i;
	
	printf("Number of parallel resistors: ");
	scanf("%d", &len);
	
	int *array = malloc(len * sizeof(int)); 
			// sizeof(int) == size of a single element stored at an index.
			// sizeof(int) * len == size of total array, in bytes
			// which translates to how many elements/ indices this array contains.
	
	for (i = 0; i < len; i++) {
		printf("Enter the %d. number: \n", i + 1);
		scanf("%d", &array[i]);
	}
	
	double totalR = calc_resistance(len, array);
			// by calling calc_resistance locally, this method
			// makes use of local variables 'len' and 'array'
			// so they won't need to be passed to another function
			// because if there are two functions to be written, get_resistances
			// cannot return both the length of the array and the array itself.
			// It can only return one value.
	free(array);
	return 0;
}

void main() {
	get_resistances();
	
}



/* Alternative version to malloc() solution - get_len() gets separated into another function

int get_len() {
	int len;
	printf("Input the number of parallel resistors: ");
	scanf("%d", &len);
		
	return len;
}
int * get_resistances(int len) {
	// int *array;
	int len, i;
	
	int *array = malloc(len * sizeof(int)); 
	// - sizeof(int) == 4 bytes, which corresponds to the size of an element
	// stored in a single index.
	// - len * sizeof(int) == size of an element times 'len', which is synonymous with array length (the number of elements in said array)	
	// - I've read that typecasting (converting) the result returned by malloc is unnecessary and generally bad practice. My question is, how is that so in this example? 
	
	for (i = 0; i < len; i++) {
		printf("Enter the %d. number: \n", i + 1);
		scanf("%d", &array[i]);
	}
	
	return array;
}

double calc_resistance (int len, int ar[]) {
	int i;
	double res = 0.0, total_res;
	for (i = 0; i < len; i++) {
		res += 1. / ar[i];
		// printf("%f ", arr[i]);
	}
	total_res = 1. / res;
	// printf("\n%f ", total_res);
	
	return total_res;
}

void main() {
	int i;
	int arrlen = get_len();
		
	int *arr = get_resistances(arrlen);
	printf("%d\n", sizeof(*arr));
	printf("%d\n", sizeof(*arr) / sizeof(int));
	double totalR = calc_resistance(arrlen, arr);
	
	printf("The number of parallel resistors: %d \n", arrlen);
	printf("Input resistance values: ");
	for (i = 0; i < arrlen; i++) {
		printf("%d ", arr[i]);
	}
	printf("\nTotal resistance is: %f", totalR);
	
	free(arr);
	
}

*/
