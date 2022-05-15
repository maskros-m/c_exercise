#include <stdio.h>
#include "circuit.h"


// read the resistances from stdin
// also ask the user whether a parallel or series connection is used
// return a new circuit struct containing the above data
Circuit read_circuit() {
    Circuit input_circuit;

    printf("Value of first resistor: ");
    scanf("%lf", &input_circuit.r1);

    printf("Value of second resistor: ");
    scanf("%lf", &input_circuit.r2);

    printf("Value of third resistor: ");
    scanf("%lf", &input_circuit.r3);

    do { 
        printf("Enter 1 for a series connection, 0 for a parallel");
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
void draw_circuit(Circuit c) {

}


//print the values of the resistors, whether a parallel or series connection
// is used and the total resistance
void print_circuit(Circuit c) {

}
