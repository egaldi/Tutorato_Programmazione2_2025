//Created on 24 March 2025 by Elena M Galdi

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// Implementare un programma che:
// • allochi dinamicamente una matrice di interi di dimensione 5x5
// • la riempia con valori casuali compresi tra 0 e 99
// • calcoli la somma di tutti gli elementi della matrice
// • stampi la matrice e la somma calcolata
// • deallochi la matrice

// Si scrivano le funzioni per allocare dinamicamente la matrice, per riempirla con valori casuali, per calcolare la somma degli elementi e per stamparla.
// Si utilizzi la seguente firma per le funzioni:
// • int** allocateMatrix(int rows, int cols);
// • void fillMatrix(int** matrix, int rows, int cols);
// • void sumMatrix(int** matrix, int rows, int cols, int* sum);
// • void printMatrix(int** matrix, int rows, int cols);
// • void freeMatrix(int** matrix, int rows);
// Si scriva infine la funzione main che utilizzi le funzioni implementate.




// Funzione per allocare dinamicamente una matrice
int** allocateMatrix(int rows, int cols) {
    int** matrix = (int**)malloc(rows * sizeof(int*));
    for (int i = 0; i < rows; i++) {
        matrix[i] = (int*)malloc(cols * sizeof(int));
    }
    return matrix;
}

// Funzione per riempire la matrice con valori casuali
void fillMatrix(int** matrix, int rows, int cols) {
    srand(time(NULL));
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = rand() % 100; // Valori casuali tra 0 e 99
        }
    }
}

// Funzione per calcolare la somma degli elementi della matrice
void sumMatrix(int** matrix, int rows, int cols, int* sum) {
    *sum = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            *sum += matrix[i][j];
        }
    }
}

// Funzione per stampare la matrice
void printMatrix(int** matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

// Funzione per liberare la memoria allocata per la matrice
void freeMatrix(int** matrix, int rows) {
    for (int i = 0; i < rows; i++) {
        free(matrix[i]);
    }
    free(matrix);
}

int main() {
    int rows = 5;
    int cols = 5;
    int sum;

    // Allocazione dinamica della matrice
    int** matrix = allocateMatrix(rows, cols);

    // Riempimento della matrice con valori casuali
    fillMatrix(matrix, rows, cols);

    // Calcolo della somma degli elementi della matrice
    sumMatrix(matrix, rows, cols, &sum);

    // Stampa della matrice
    printf("Matrice:\n");
    printMatrix(matrix, rows, cols);

    // Stampa della somma degli elementi
    printf("\nSomma degli elementi: %d\n", sum);

    // Liberazione della memoria allocata
    freeMatrix(matrix, rows);

    return 0;
}