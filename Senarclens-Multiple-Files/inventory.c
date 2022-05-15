#include <stdio.h>
#include <string.h>
#include "inventory.h"

// Return the total number of resistors in the inventory.
// Eg. there are 100 resistors with 330 ohm, 50 with 5600 ohm and 10 with
// 2 megaohm, the total number is 160.
size_t count_resistors(Item items[], size_t count) {
    size_t resistors_qty = 0;
    for (int i = 0; i < count; i++) {
        if (!strcmp(items[i].type, "resistor"))
            resistors_qty += items[i].device_qty;
    }

    return resistors_qty;
}

// Return the total number of capacitors in the inventory.
size_t count_capacitors(Item items[], size_t count) {
    size_t capacitors_qty = 0;
    for (int i = 0; i < count; i++) {
        if (!strcmp(items[i].type, "capacitor"))
            capacitors_qty += items[i].device_qty;
    }

    return capacitors_qty;
}