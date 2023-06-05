/*Escriba una función que busque recursivamente un valor en una lista de números
enteros.*/

//
// Created by Administrador on 5/6/2023.
//

#include "Enteros.h"
#include <stdio.h>
#include <malloc.h>

Numero * newNumero(int num){
    Numero * auxNum = NULL;
    auxNum = malloc(sizeof(Numero));
    if(auxNum == NULL){
        printf("No hay memoria contigua\n");
        exit (-1);
    }else{
        auxNum->num = num;
        auxNum->sig = NULL;

        return auxNum;
    }

}

Lista * newLista(){
    Lista * auxLista = NULL;
    auxLista = malloc((sizeof (Lista)));
    if(auxLista == NULL){
        printf("Error al asignar memoria\n");
        exit (-1);
    }else{
        auxLista->cabecera = NULL;
        return auxLista;
    }
}

void enlistar(Lista * lista, Numero * numAInsertar){
    if(lista->cabecera ==  NULL){
        //Lista vacia
        lista->cabecera = numAInsertar;
    }else{
        while (lista->cabecera->sig != NULL){
            lista->cabecera = lista->cabecera->sig;
        }
        lista->cabecera->sig = numAInsertar;
    }
}

int buscar(Lista *lista, int numBuscado) {
    int cont=0;
    while(lista->cabecera != NULL || lista->cabecera->num == numBuscado){
        lista->cabecera = lista->cabecera->sig;
        cont ++;
    }
    if(lista->cabecera == NULL){
        return 0;
    }else
        if(lista->cabecera->num == numBuscado){
            return 1;
        }
}

