#include "lista.h"
#include <stdlib.h>
#include <string.h>

Nodo* CrearNodo(Libro* libro) {
	Nodo* nodo = (Nodo *) malloc(sizeof(Nodo));
	strncpy(nodo->libro.titulo, libro->titulo, 50);
	strncpy(nodo->libro.autor, libro->autor, 50);
	strncpy(nodo->libro.isbn, libro->isbn, 13);
	nodo->siguiente = NULL;
	return nodo;
}

void DestruirNodo(Nodo* nodo) {
	free()nodo);
}


