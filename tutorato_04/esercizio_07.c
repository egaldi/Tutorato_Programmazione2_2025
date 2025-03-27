//Created on 24 March 2025 by Elena M Galdi
#include <stdio.h>
#include <stdlib.h>

/*
Esercizio:
Scrivere un programma in C che utilizzi una matrice dinamica (allocata come puntatore a puntatori).
Il programma deve:
1. Allocare dinamicamente una matrice di dimensioni 3x3.
2. Riempire la matrice con valori predefiniti (ad esempio, i numeri consecutivi da 0 a 8).
3. Stampare la matrice in formato tabellare.
4. Deallocare correttamente la memoria utilizzata.

*/

int main() {
    int rows = 3, cols = 3; // Dimensioni predefinite della matrice

    // Allocazione dinamica della matrice
    int **matrix = (int **)malloc(rows * sizeof(int *));
    if (matrix == NULL) {
        printf("Errore di allocazione della memoria.\n");
        return 1;
    }

    for (int i = 0; i < rows; i++) {
        matrix[i] = (int *)malloc(cols * sizeof(int));
        if (matrix[i] == NULL) {
            printf("Errore di allocazione della memoria.\n");
            return 1;
        }
    }

    // Riempimento della matrice con valori predefiniti
    printf("Riempimento della matrice con valori predefiniti:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
        *(*(matrix + i)+j) = i * cols + j; // Valori predefiniti
        }
    }

    // Stampa della matrice
    printf("Matrice:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Deallocazione della memoria
    for (int i = 0; i < rows; i++) {
        free(matrix[i]);
    }
    free(matrix);

    return 0;
}