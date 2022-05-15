#ifndef CIRCUIT_H
#define CIRCUIT_H


typedef struct circuit Circuit;
struct circuit {
    double r1;
    double r2;
    double r3;
    int isSeries;
};

// return the total resistance 
double calc_circuit_resistance(Circuit c);

#endif
