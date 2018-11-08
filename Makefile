CC = g++
OBJ = ./build
SRC = ./src
BIN = ./bin
INC = ./include

PROG = $(BIN)/exec

CPPFLAGS = -Wall -pedantic -std=c++11 -I$(INC)

OBJS = $(OBJ)/ingresso.o $(OBJ)/ingressoVip.o $(OBJ)/main.o

all: mkdirs $(PROG)

mkdirs:
	mkdir -p $(BIN)
	mkdir -p $(OBJ)

$(PROG): $(OBJS)
	$(CC) $(CPPFLAGS) -o $(PROG) $(OBJS)

$(OBJ)/ingresso.o: $(SRC)/ingresso.cpp $(INC)/ingresso.h
	$(CC) $(CPPFLAGS) -c $(SRC)/ingresso.cpp -o $(OBJ)/ingresso.o

$(OBJ)/ingressoVip.o: $(SRC)/ingressoVip.cpp $(INC)/ingressoVip.h $(OBJ)/ingresso.o
	$(CC) $(CPPFLAGS) -c $(SRC)/ingressoVip.cpp -o $(OBJ)/ingressoVip.o

$(OBJ)/main.o: $(SRC)/main.cpp $(OBJ)/ingresso.o $(OBJ)/ingressoVip.o
	$(CC) $(CPPFLAGS) -c $(SRC)/main.cpp -o $(OBJ)/main.o


clean:
	rm -f $(PROG)/*
	rm -f $(OBJS)/*
