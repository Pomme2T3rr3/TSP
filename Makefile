CC=gcc
CFLAGS=-Wall -Wextra -pedantic -std=c17
LDFLAGS=-lm

SRCS=main.c moteur.c fichier.c genetic.c
OBJS=$(SRCS:.c=.o)
TARGET=tsp

all: $(TARGET)

$(TARGET): $(OBJS)
    $(CC) $(OBJS) -o $(TARGET) $(LDFLAGS)

%.o: %.c
    $(CC) $(CFLAGS) -c $< -o $@

clean:
    rm -f $(OBJS) $(TARGET)