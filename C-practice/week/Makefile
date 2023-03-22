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

all:main.o week.o week_sm.o
	${CC} main.o week.o week_sm.o -o main.exe

main.o:main.c week.h
	${CC} main.c $(CFLAGS)
week.o:week.c week.h
	${CC} week.c $(CFLAGS)
week_sm.o:week_sm.c  week_sm.h
	${CC} week_sm.c $(CFLAGS)
clean:#@ -> 表示指令不顯示
	@rm -rf *.o *.exe