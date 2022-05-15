.DEFAULT_GOAL := create
all
	gcc -c *.c
clean:
	find . -name '*~' -o -name '*.o' -o -name 'inventory_tool' | xargs rm
create:
	touch dummy.txt
inventory_tool:
	gcc *.o -o inventory_tool

interface.o: interface.c interface.h inventory.h cli.h
	gcc -std=c11 -Wall -c interface.c
inventory.o: inventory.c inventory.h
	gcc -std=c11 -Wall -c inventory.c
ui.o: ui.c ui.h circuit.h
	gcc -std=c11 -Wall -c ui.c
circuit.o: circuit.c circuit.h
	gcc -std=c11 -Wall -c circuit.c

main.o: main.c circuit.h ui.h inventory.h interface.h cli.h
	gcc -std=c11 -Wall -c main.c
cli.o: cli.c cli.h
	gcc -std=c11 -Wall -c cli.c
# why c11???


.PHONY: clean