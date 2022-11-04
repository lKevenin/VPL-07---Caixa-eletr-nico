CC := g++
FLAGS := -I include/ -Wall
BUILD := build/
SRC := src/
TARGET := main.out


all: main

intruso:
    g++ intruso.cpp -o intruso.o

main: intruso
    g++ intruso.o main.cpp -o main.out $(TARGET)

clean:
    rm main.out