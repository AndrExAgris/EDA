run: final
	./final

final: main.c Pilha.o
	gcc -o final main.c Pilha.o -lm

Pilha.o: Pilha.c Pilha.h
	gcc -o Pilha.o Pilha.c -c -lm