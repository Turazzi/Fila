CC = gcc
CFLAGS = -Wall -g
TARGET = main

all: $(TARGET)

$(TARGET): main.o queue.o
		$(CC) $(CFLAGS) -o $(TARGET) main.o queue.o

main.o: main.c queue.h
		$(CC) $(CFLAGS) -c main.c

queue.o: queue.c queue.h
		$(CC) $(CFLAGS) -c queue.c

clean:
		rm -f *.o $(TARGET)
