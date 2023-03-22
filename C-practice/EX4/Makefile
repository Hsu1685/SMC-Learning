#example 2
#usage: make main OR make

#欲使用的C compiler
CC = gcc

#欲使用的參數
#CFLAGS = -O3 -ansi
CFLAGS = -I stoplight -I include -c

#include headers的位置
INC = include

#include libraries的位置
LIB = stoplight

all:main.o stoplight.o stoplight_sm.o
	${CC} main.o stoplight.o stoplight_sm.o -o main.exe

main.o:main.c ${LIB}/stoplight.h
	${CC} main.c $(CFLAGS)
stoplight.o:${LIB}/stoplight.c ${LIB}/stoplight.h
	${CC} ${LIB}/stoplight.c $(CFLAGS)
stoplight_sm.o:${LIB}/stoplight_sm.c  ${LIB}/stoplight_sm.h
	${CC} ${LIB}/stoplight_sm.c $(CFLAGS)
clean:#@ -> 表示指令不顯示
	@rm -rf *.o *.exe