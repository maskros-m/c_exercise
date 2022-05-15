#include <stdio.h>
#include "circuit.h"

// return the total resistance of the circuit
double calc_circuit_resistance (Circuit c) {
    double totalRes = 0;
    if (c.isSeries) {
        for (int i = 0; i < 3; i++)
            totalRes += c.resistors[i];
    } else {
        for (int i = 0; i < 3; i++)
            totalRes += 1/ c.resistors[i];
        totalRes = 1./ totalRes;
    }
    return totalRes;
}