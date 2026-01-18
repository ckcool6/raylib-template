## windows

CFLAGS := -Wall -g -O2 -I./include
LDIR = -L./lib
LIBS = -lraylib -lopengl32 -lgdi32 -lwinmm

OBJS = Game.o Ball.o

all: main.c ${OBJS}
	@echo building success
	@gcc  main.c ${OBJS} ${CFLAGS} ${LDIR} ${LIBS}

%.o : %.c
	@gcc -c $< ${CFLAGS} ${LDIR} -lraylib -o $@ 

.PHONY: clean 

clean:
	@echo clean completed
	@rm  Game.o Ball.o a.exe 
