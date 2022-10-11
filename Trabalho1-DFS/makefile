run: final
	./final < in

final: main.c Matriz.o Pilha.o
	gcc -o final main.c Matriz.o Pilha.o -lm

Pilha.o: Pilha.c Pilha.h
	gcc -o Pilha.o Pilha.c -c -lm

Matriz.o: Matriz.c Matriz.h
	gcc -o Matriz.o Matriz.c -c -lm