include ./variables
.PHONY: clean

$(EXE): $(OBJ)
	$(CC) $^ -o $@

%.o: %.c
	$(CC) -c $<

main.o: header.h

clean: 
	rm $(EXE) *.o
