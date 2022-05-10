#include <stdio.h>
#include "circuit.h"

// return the total resistance of the circuit
double calc_circuit_resistance(Circuit c) {
    double totalResistance = 0;
    if (c.isSeries) {
        totalResistance = c.r1 + c.r2 + c.r3;
    } else {
        totalResistance = 1 / (1/c.r1 + 1/c.r2 + 1/c.r3);
    }
    return totalResistance;
}