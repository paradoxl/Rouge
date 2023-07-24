CC = GCC
CFLAGS = -lncurses -I./include/
SOURCES = ./src/*.c
all: rouge run clean
rouge:
	$(CC) $(SOURCES) $(CFLAGS) -o rouge
run:
	./rouge
clean:
	rm rouge
