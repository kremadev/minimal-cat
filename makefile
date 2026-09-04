# MADE BY MakeMake
CC = gcc
SRC = main.c
OUT = main
FLAGS = 

all: main
main:
	$(CC) $(FLAGS) $(SRC) -o $(OUT)

.PHONY: clean
clean:
	rm $(OUT)