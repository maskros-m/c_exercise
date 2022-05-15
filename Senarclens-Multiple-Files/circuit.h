#ifndef CIRCUIT_H
#define CIRCUIT_H

typedef struct circuit Circuit;
struct circuit {
    double resistors[3];
    int isSeries; // 1 is series, 0 is parallel
};

// return the total resistance
double calc_circuit_resistance (Circuit c);

#endif