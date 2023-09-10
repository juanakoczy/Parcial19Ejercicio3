//
// Created by Usuario on 10/9/2023.
//

#ifndef PARCIAL19EJERCICIO3_LISTADOBLE_H
#define PARCIAL19EJERCICIO3_LISTADOBLE_H

typedef struct nodo{
    int dato;
    struct nodo * ant;
    struct nodo * sig;
}Nodo;

typedef struct lista{
    Nodo * cabecera;
}Lista;

Nodo * newNodo (int dato);
Lista * newLista ();

void insertar (Lista * lista, Nodo * nodo);
void imprimir (Lista * lista);
void eliminar (Lista * lista, int dato);

#endif //PARCIAL19EJERCICIO3_LISTADOBLE_H
