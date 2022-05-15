#include <stdio.h>
#include "circuit.h"


// read the resistances from stdin
// also ask the user whether a parallel or series connection is used
// return a new circuit struct containing the above data
Circuit read_circuit () {
    Circuit input_circuit;
    
    for (int i = 0; i < 3; i++) { 
        printf("Value of resistor %d: ", i+1);
        scanf("%lf", &input_circuit.resistors[i]);
    }

    do {
        printf("Enter 1 for a series connection, or 0 for a parallel: ");
        scanf("%d", &input_circuit.isSeries);
    } while (input_circuit.isSeries != 0 && input_circuit.isSeries != 1);

    return input_circuit;
}

// print a visual representation of the struct; this can be something like
// -[220Ω]-[330Ω]-[220Ω]- and
//
//  ┌[220Ω]┐
// ─┼[330Ω]┼─
//  └[220Ω]┘
void draw_circuit (Circuit c) {
    int i = 0;
    if (c.isSeries) {
        printf("-");
        for (i; i < 3; i++) printf("[%.2lfΩ]-", c.resistors[i]);
        printf("\n");
    } else {
        for (i = 0; i < 3; i++) {
            if (i == 0 || i == 3) printf(" ┌[%.2lfΩ]┐\n", c.resistors[i]);
            else printf("─┼[%.2lfΩ]┼─\n", c.resistors[i]);
        }
    }
}

//print the values of the resistors, whether a parallel or series connection
// is used and the total resistance
void print_circuit(Circuit c) {
    int i;
    for (i = 0; i < 3; i++)
        printf("Value of resistor %d: %.2lf\n", i+1, c.resistors[i]);
    
    printf("The connection used is ");
    if (c.isSeries == 1) printf("series\n");
    else printf("parallel\n");

    printf("Total resistance of the circuit is %.2lf\n", calc_circuit_resistance (c));
}
