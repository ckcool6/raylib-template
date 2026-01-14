CFLAGS := -Wall -g -O2 -I./include
LDIR = -L./lib
LIBS = -lraylib -lopengl32 -lgdi32 -lwinmm

all: main.c Game.o Ball.o
	@echo start building...
	@gcc .\main.c .\Game.o .\Ball.o ${CFLAGS} ${LDIR} ${LIBS}

Ball.o : Ball.c Ball.h  
	@gcc -c .\Ball.c ${CFLAGS} ${LDIR} -lraylib  

Game.o : Game.c Game.h
	@gcc -c .\Game.c ${CFLAGS} ${LDIR} -lraylib


.PHONY: clean

clean:
	@echo start clean...
	@rm  Game.o Ball.o a.exe 