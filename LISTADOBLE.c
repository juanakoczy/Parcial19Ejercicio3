//
// Created by Usuario on 10/9/2023.
//

#include "LISTADOBLE.h"
#include "malloc.h"
#include "stdio.h"

Nodo * newNodo (int dato){

    Nodo * aux = NULL;
    aux = malloc (sizeof (Nodo));

    if (aux == NULL){
        printf("No hay espacio de memoria sufiente.");
        exit (-1);
    }
    else{
        aux->ant = NULL;
        aux->dato = dato;
        aux->sig = NULL;
        return aux;
    }
}

Lista * newLista (){

    Lista * aux = NULL;
    aux = malloc (sizeof (Lista));

    aux->cabecera = NULL;

    return aux;
}

void insertar (Lista * lista, Nodo * nodo ){

    if (lista->cabecera == NULL){//la lista esta vacia, inserto el primer nodo

        lista->cabecera = nodo;

    }
    else {

        Nodo * aux = lista->cabecera;

        while(aux->sig != NULL) {//busco el espacio vacio

                aux = aux->sig;

            }
        aux->sig = nodo;//inserto en el lugar vacio
        }
    }



void imprimir (Lista * lista){

    Nodo * aux = lista->cabecera;

    while(aux != NULL){
        printf("\t %d \t", aux->dato);

        aux = aux->sig;

    }
}

void eliminar (Lista * lista, int dato) {

    if (lista->cabecera == NULL) {
        printf("Lista vacia.");
        return;

    }
    else {
        Nodo *actual = lista->cabecera;
        Nodo *anterior = NULL;

        while (actual != NULL && actual->dato != dato) {//recorro la lista

            anterior = actual;
            actual = actual->sig;

        }
        if (actual == NULL) {
        printf("El valor no se encuentra en la lista.");
        return;
        }
        else{

            if(actual==lista->cabecera) {
                lista->cabecera = actual->sig;
            }

            else{
                anterior->sig=actual->sig;

            }
        }
        free(actual);
    }
}