// Created on 11 March 2025 by Elena M Galdi

#include <stdio.h>
#include <stdlib.h>


int main() {

    int min=1000, max=0;
    int iter_min, iter_max;

    for(int i=0; i<50; i++)
    {
        int numero;
        numero= rand()%100;

        if(numero >max){
            iter_max = i;
            max=numero;
        }

        if(numero <min){
            iter_min= i;
            min=numero;
        }
        
    }

    printf("Il numero minore generato è %d ed è apparso all'iterazione %d\n", min, iter_min);

    printf("Il numero massimo generato è %d ed è apparso all'iterazione %d\n", max, iter_max);
    return 0;
}