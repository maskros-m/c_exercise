#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "inventory.h"
#include "cli.h"


// ask the user to enter a new item on the command-line;
// add the new item to the given list and return the count increased by one
// (since there is one more element in the inventory array)
size_t add_item(Item items[], size_t count) {
    printf("Enter device type: ");
    scanf("%s", items[count].type);

    printf("Enter device quantity: ");
    scanf("%u", &items[count].device_qty);

    printf("Enter device value: ");
    scanf("%lf", &items[count].value);

    printf("Enter unit: ");
    scanf("%s", items[count].unit);
    // count+= 1;
    return ++count;
}

// print given item to stdout
void print_item(Item i) {
    printf("Type: %s; ", i.type);
    printf("quantity: %u; ", i.device_qty);
    printf("value: %.2lf; ", i.value);
    printf("unit: %s.\n", i.unit);
}

// print all items, one per line
void print_items(Item items[], size_t count) {
    for (int i = 0; i < count; i++) {
        print_item(items[i]);
    }
}

// command-line interface to create and manage an inventory
// start a loop that asks the user which action they want to perform
// `a` -> create a new item and add it to the inventory array
// `c` -> show the number of capacitors
// `e` -> exit the program
// `i n` -> show the n-th item (0-indexed) of the inventory array
// `h` -> show this help text
// `l` -> show the list of items
// `r` -> show the number of resistors
void cli() {
    Item inventory[100] = {};
    size_t count = 0;
    char command[10];
    
    do {
        printf("Enter a command, or 'e' to exit, or 'h' for help.\n");
        fgets(command, 10, stdin);
        if (command[0] == 'e' && strlen(command) == 2) break;

        else if (command[0] == 'i' && strlen(command) > 3) {
            if (command[1] != ' ') {  }
            else {
                int validCommand = isNumeric(command, 2);
                char n[8];
                if (validCommand) {
                    char *num = extractStr(command, n, 2);
                    if (atoi(num) < 0 || atoi(num) > count - 1) {
                        puts("IndexRange Error: No such item in inventory.\n");
                    } else {
                        print_item(inventory[atoi(num)]);
                    }
                }
            }
        }
        else if (command[0] == 'c') {
            int capacitor_qty = count_capacitors(inventory, count);
            printf("Total number of capacitors: %d.\n", capacitor_qty);
        }
        else if (command[0] == 'a' && strlen(command) == 2) {
            count = add_item(inventory, count);
        }
        else if (command[0] == 'l' && strlen(command) == 2) {
            print_items(inventory, count);
        }
        else if (command[0] == 'r' && strlen(command) == 2) {
            int res_qty = count_resistors(inventory, count);
            printf("Total number of resistors: %d.\n", res_qty);
        }
        else if (command[0] == 'h' && strlen(command) == 2) {
            printf("`a` -> create a new item and add it to the inventory array\n");
            printf("`c` -> show the number of capacitors\n");
            printf("`e` -> exit the program\n");
            printf("`i n` -> show the n-th item (0-indexed) of the inventory array\n");
            printf("`h` -> show this help text\n");
            printf("`l` -> show the list of items\n");
            printf("`r` -> show the number of resistors\n");
        }
    } while (1);
}

