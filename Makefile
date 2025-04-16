CC=gcc
CFLAGS=-Wall -Wextra -g
LDFLAGS=-lm

# Fichiers sources principaux
SRCS=main.c moteur.c fichier.c genetic.c
OBJS=$(SRCS:.c=.o)
TARGET=tsp

# Fichiers de test
TEST_SRCS=test_moteur.c moteur.c
TEST_OBJS=$(TEST_SRCS:.c=.o)
TEST_TARGET=test_moteur

all: $(TARGET) $(TEST_TARGET)

$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $(TARGET) $(LDFLAGS)

$(TEST_TARGET): $(TEST_OBJS)
	$(CC) $(TEST_OBJS) -o $(TEST_TARGET) $(LDFLAGS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TEST_OBJS) $(TARGET) $(TEST_TARGET)

test: $(TEST_TARGET)
	./$(TEST_TARGET)

.PHONY: all clean test