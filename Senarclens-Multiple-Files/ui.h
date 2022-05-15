#ifndef UI_H
#define UI_H

#include "circuit.h"

// read the resistances from stdin
// also ask the user whether a parallel or series connection is used
// return a new circuit struct containing the above data
Circuit read_circuit();

// print a visual representation of the struct; this can be something like
// -[220Ω]-[330Ω]-[220Ω]- and
//
//  ┌[220Ω]┐
// ─┼[330Ω]┼─
//  └[220Ω]┘
void draw_circuit(Circuit c);

// print the values of the resistors, whether a parallel or series connection
// is used and the total resistance
void print_circuit(Circuit c);

#endif