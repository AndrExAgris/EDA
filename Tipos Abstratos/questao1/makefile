#teste

all: questao1

questao1: main.o Ponto.o
	gcc -o questao1 main.o Ponto.o

main.o: main.c Ponto.h
	gcc -o main.o main.c -c -W -Wall -ansi -pedantic

Ponto.o: Ponto.c Ponto.h
	gcc -o Ponto.o Ponto.c -c -W -Wall -ansi -pedantic

clean:
	rm -rf *.o *~ questao1