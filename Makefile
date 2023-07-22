.SUFFIXES: .c .o
C = gcc
CCFLAGS = -std=c99 -pedantic -Wall -g
EXEC = art
OBJS = art.o func.o

${EXEC}: ${OBJS}
	${CC} ${CCFLAGS} -o ${EXEC} ${OBJS}

.c.o:
	${CC} ${CCFLAGS} -c $<

run: ${EXEC}
	./${EXEC}

clean:
	rm -f ${EXEC} ${OBJS}

art.o: art.c func.h
func.o: func.c func.h
