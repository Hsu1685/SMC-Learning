#example 2
#usage: make main OR make

#欲使用的C compiler
CC = gcc

#欲使用的參數
#CFLAGS = -O3 -ansi
CFLAGS = -I include -c

#include headers的位置
INC = include

#include libraries的位置
LIB = stoplight

all:main.o BatteryCooling_ES80.o BatteryCooling_ES80_sm.o
	${CC} main.o BatteryCooling_ES80.o BatteryCooling_ES80_sm.o -o main.exe

main.o:main.c BatteryCooling_ES80.h
	${CC} main.c $(CFLAGS)
BatteryCooling_ES80.o:BatteryCooling_ES80.c BatteryCooling_ES80.h
	${CC} BatteryCooling_ES80.c $(CFLAGS)
BatteryCooling_ES80_sm.o:BatteryCooling_ES80_sm.c  BatteryCooling_ES80_sm.h
	${CC} BatteryCooling_ES80_sm.c $(CFLAGS)
clean:#@ -> 表示指令不顯示
	@rm -rf *.o *.exe