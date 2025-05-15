// created by Elena M Galdi on 13 May 2025

/*
Scrivere un programma in C che:
1) Definisca almeno 4 operazioni aritmetiche (somma, sottrazione, moltiplicazione, divisione).
2) Crei staticamente (dinamicamente) un array di puntatori a funzione, dove ogni funzione rappresenta un’operazione.
3) Usi questo array per eseguire, in ciclo, tutte le operazioni su una coppia di numeri.
*/



#include <stdio.h>
#include <stdlib.h>
#define DINAMICAMENTE 1
// Operazioni base
int somma(int a, int b) { return a + b; }
int sottrai(int a, int b) { return a - b; }
int moltiplica(int a, int b) { return a * b; }
int dividi(int a, int b) { return b != 0 ? a / b : 0; }

#ifndef DINAMICAMENTE
// versione con array statico a puntatori a funzione    
int main() {
    int (*operazioni [4])(int, int);  // puntatore a un array di puntatori a funzione
    int num_operazioni = 4;


    // Inizializzazione dell’array con le funzioni
    operazioni[0] = somma;
    operazioni[1] = sottrai;
    operazioni[2] = moltiplica;
    operazioni[3] = dividi;

    int a = 12, b = 3;
    const char *nomi_operazioni[] = { "Somma", "Sottrazione", "Moltiplicazione", "Divisione" };

    for (int i = 0; i < num_operazioni; i++) {
        printf("%s: %d\n", nomi_operazioni[i], operazioni[i](a, b));
    }

    // Libera memoria
    free(operazioni);

    return 0;
}
#else



// versione con array dinamico a puntatori a funzione
int main() {
    int (* *operazioni)(int, int);  // puntatore a un array di puntatori a funzione
    int num_operazioni = 4;

    // Allocazione dinamica dell’array di puntatori a funzione
    operazioni = (int (**)(int, int))malloc(num_operazioni * sizeof(int (*)(int, int)));
    if (operazioni == NULL) {
        fprintf(stderr, "Errore allocazione memoria\n");
        return 1;
    }

    // Inizializzazione dell’array con le funzioni
    operazioni[0] = somma;
    operazioni[1] = sottrai;
    operazioni[2] = moltiplica;
    operazioni[3] = dividi;

    int a = 12, b = 3;
    const char *nomi_operazioni[] = { "Somma", "Sottrazione", "Moltiplicazione", "Divisione" };

    for (int i = 0; i < num_operazioni; i++) {
        printf("%s: %d\n", nomi_operazioni[i], operazioni[i](a, b));
    }

    // Libera memoria
    free(operazioni);

    return 0;
}
#endif