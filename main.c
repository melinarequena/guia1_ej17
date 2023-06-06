/*Escriba una función que busque recursivamente un valor en una lista de números
enteros.*/
#include <stdio.h>
#include "Enteros.h"

int main() {
    int num, result;
    Lista * lista= newLista();

    enlistar(lista, newNumero(2));
    enlistar(lista, newNumero(6));
    enlistar(lista, newNumero(9));
    enlistar(lista, newNumero(1));
    enlistar(lista, newNumero(10));
    enlistar(lista, newNumero(3));

    printear(lista);

    printf("Ingrese el numero que desea buscar\n");
    scanf("%d", &num);

    result = buscar(lista, num);
    if(result==0){
        printf("No existe el numero en la lista\n");
    }else{
        if(result==1) {
            printf("El numero si existe\n");
        }
    }

    return 0;
}
