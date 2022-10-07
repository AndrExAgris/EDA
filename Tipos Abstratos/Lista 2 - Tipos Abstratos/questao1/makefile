run: final
	./final

final: main.c Ponto.o
	gcc -o final main.c Ponto.o -lm

Ponto.o: Ponto.c Ponto.h
	gcc -o Ponto.o Ponto.c -c -lm