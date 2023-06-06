/*Escriba una función que busque recursivamente un valor en una lista de números
enteros.*/

//
// Created by Administrador on 5/6/2023.
//

#ifndef GUIA1_EJ17_ENTEROS_H
#define GUIA1_EJ17_ENTEROS_H

typedef struct numero{
    int num;
    struct numero * sig;
}Numero;

typedef struct lista{
    Numero * cabecera;
}Lista;

Numero * newNumero(int num);
Lista * newLista();

void enlistar(Lista * lista, Numero * numAInsertar);

int buscar(Lista * lista, int numBuscado);

void printear(Lista * lista);




#endif //GUIA1_EJ17_ENTEROS_H
