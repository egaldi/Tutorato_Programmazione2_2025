// Created on 24 March 2025 by Elena M Galdi
#include <stdio.h>

// Implementare una funzione che inverta l’ordine dei valori di un array di dati interi che rispetti il seguente
// prototipo:
// void reversei(int *r, const int *values, unsigned size);
// dove:
// • r è il puntatore all’array dove verrà salvata l’array invertito
// • values è il puntatore all’array di input
// • size è la dimensione dell’array


void reversei(int *r, const int *values, unsigned size) {
    for (unsigned i = 0; i < size; i++) {
        r[i] = values[size - 1 - i];
    }
}

int main() {
    int values[] = {1, 2, 3, 4, 5};
    unsigned size = sizeof(values) / sizeof(values[0]);
    int reversed[size];

    reversei(reversed, values, size);

    printf("Reversed array: ");
    for (unsigned i = 0; i < size; i++) {
        printf("%d ", reversed[i]);
    }
    printf("\n");

    return 0;
}