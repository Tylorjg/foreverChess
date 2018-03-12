CC = gcc
CFLAGS = -Wall -Wextra
DEPS = board.o
OBJ = main.o board.o

%.o: %.c $(DEPTS)
	$(CC) $(CFLAGS) -c -o $@ $<

main: $(OBJ) 
	$(CC) $(CFLAGS) -o $@ $^

clean: 
	rm $(OBJ) main


