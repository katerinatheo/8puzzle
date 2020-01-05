CC := gcc
CFLAGS := -Wall -g
INCLUDE :=
LIBS :=
SRC := $(wildcard *.c)
EXECNAME := ex1.out

ex1: $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(EXECNAME)

clean:
	rm -f $(EXECNAME)