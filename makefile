CC = gcc
CFLAGS = -I.
DEPS = longest_word.h
OBJ = main.o longest_word.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

longest_word: $(OBJ)
	$(CC) -o  $@ $^ $(CFLAGS)
