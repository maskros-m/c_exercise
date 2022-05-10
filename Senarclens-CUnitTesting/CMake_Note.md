```makefile
array_tool: main.o ui.o array.o // array_tool is the target and is dependent on the files listed after it.
  gcc -o array_tool main.o ui.o array.o // is indentation necessary? Likely yes.
  
array.o: array.c array.h
  gcc -std=cll -Wall -c array.c
  
ui.o: ui.c ui.h array.h
  gcc -std=cll -Wall -c ui.c

main.o: main.c ui.h array.h
  gcc -std=cll -Wall -c main.c
  
 .PHONY: clean
 clean: 
  find . -name '*=' -o -name '*.o' -o -name
  'array_tool' | xargs rm
```

[Indentation in makefile](https://stackoverflow.com/questions/28712585/when-to-use-space-or-tab-in-makefile)


zum Ausführen: make Befehl im Terminal zu tippen
  
