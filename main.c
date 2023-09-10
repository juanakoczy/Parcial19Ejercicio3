//Funcion eliminar para una lista doblemente enlazada
#include <stdio.h>
#include "LISTADOBLE.h"

int main() {

    Lista * nuevalista = newLista();

    insertar(nuevalista, newNodo(1) );
    insertar(nuevalista, newNodo(2) );
    insertar(nuevalista, newNodo(3) );
    insertar(nuevalista, newNodo(4) );
    insertar(nuevalista, newNodo(5) );

    imprimir(nuevalista);

    eliminar(nuevalista,3);

    printf("\n");

    imprimir(nuevalista);


    return 0;
}
