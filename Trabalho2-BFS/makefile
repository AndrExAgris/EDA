run: final
	./final < in

final: main.c Matriz.o Fila.o
	gcc -o final main.c Matriz.o Fila.o Pilha.o -lm

Fila.o: Fila.c Fila.h
	gcc -o Fila.o Fila.c -c -lm

Pilha.o: Pilha.c Pilha.h
	gcc -o Pilha.o Pilha.c -c -lm

Matriz.o: Matriz.c Matriz.h
	gcc -o Matriz.o Matriz.c -c -lm