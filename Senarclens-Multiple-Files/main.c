#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "circuit.h"
#include "ui.h"
#include "inventory.h"
#include "interface.h"
#include "cli.h"

int main() {
    Circuit Parallel = read_circuit();
    draw_circuit(Parallel);
    print_circuit(Parallel);

    Circuit Series = read_circuit();
    draw_circuit(Series);
    print_circuit(Series);

    cli();
}