# File: Makefile
# Date: 09/13/2018
# Authors: Landon Thomas
# Makefile for Array Number Variance Assignment 2

# Compiler Version
CC=g++

# Debugging flag -g
DEBUG=-g

# Target
TARGET=main

# Compile with all errors and warnings
CFLAGS=-c -Wall $(DEBUG)

# Makefile syntax:
# target: dependencies
# (tab) system command(s)

all: $(TARGET)

$(TARGET): main.o 
	$(CC) main.o -o $(TARGET)

main.o: main.cpp 
	$(CC) $(CFLAGS) main.cpp

clear:
	rm *.o *~ $(TARGET)
