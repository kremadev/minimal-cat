# MADE BY MakeMake
CC = gcc
SRC = cat.c
OUT = cat
FLAGS = -Wall -Wextra

all: cat
cat:
	$(CC) $(FLAGS) $(SRC) -o $(OUT)

.PHONY: clean
clean:
	rm $(OUT)