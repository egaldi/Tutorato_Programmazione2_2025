//Created on 24 March 2025 by Elena M Galdi
#include <stdio.h>
#include <stdlib.h>

// Implementare una funzione che inverta l’ordine dei valori di un array di dati interi che rispetti il seguente
// prototipo:
// int* reversei(const int *values, unsigned size);
// dove:
// • values è il puntatore all’array di input
// • size è la dimensione dell’array
// • la funzione ritorna il puntatore all’array invertito, allocato dalla funzione (NULL in caso di errore di
// allocazione)

int* reversei(const int *values, unsigned size) {
    if (values == NULL || size == 0) {
        return NULL;
    }

    int *reversed = (int *)malloc(size * sizeof(int));
    if (reversed == NULL) {
        return NULL;
    }

    for (unsigned i = 0; i < size; i++) {
        reversed[i] = values[size - 1 - i];
    }

    return reversed;
}

int main() {
    int values[] = {1, 2, 3, 4, 5};
    unsigned size = sizeof(values) / sizeof(values[0]);

    int *reversed = reversei(values, size);
    if (reversed != NULL) {
        for (unsigned i = 0; i < size; i++) {
            printf("%d ", reversed[i]);
        }
        printf("\n");
        free(reversed);
    } else {
        printf("Memory allocation failed\n");
    }

    return 0;
}