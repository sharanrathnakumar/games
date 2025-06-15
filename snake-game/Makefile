CC=gcc
CFLAGS=-I./include -Wall -Wextra -g
SRC=src/main.c src/game.c src/snake.c src/utils.c
OBJ=$(SRC:.c=.o)
TARGET=snake_game

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)