//Created on 24 March 2025 by Elena M Galdi
#include <stdio.h>
// Implementare una funzione che dati due array di valori interi ordinati, generi un terzo array che contenga
// tutti i valori dei precedenti array in modo ordinato. Assumere che all’interno degli array ci possano essere
// elementi duplicati. La funzione rispetti il seguente prototipo:
// void merge(int *r, const int *a1, unsigned s1, const int *a2, unsigned s2);
// dove:
// • r è il puntatore all’array generato
// • a1 è il puntatore al primo array di input
// • s1 è la dimensione del primo array
// • a2 è il puntatore al secondo array di input
// • s2 è la dimensione del secondo arra


void merge(int *r, const int *a1, unsigned s1, const int *a2, unsigned s2) {
    unsigned i = 0, j = 0, k = 0;

    // Merge arrays a1 and a2 into r
    while (i < s1 && j < s2) {
        if (a1[i] <= a2[j]) {
            r[k++] = a1[i++];
        } else {
            r[k++] = a2[j++];
        }
    }

    // Copy remaining elements of a1, if any
    while (i < s1) {
        r[k++] = a1[i++];
    }

    // Copy remaining elements of a2, if any
    while (j < s2) {
        r[k++] = a2[j++];
    }
}

int main() {
    int a1[] = {1, 3, 5, 7};
    int a2[] = {2, 3, 6, 8};
    unsigned s1 = sizeof(a1) / sizeof(a1[0]);
    unsigned s2 = sizeof(a2) / sizeof(a2[0]);
    int r[s1 + s2];

    merge(r, a1, s1, a2, s2);

    printf("Merged array: ");
    for (unsigned i = 0; i < s1 + s2; i++) {
        printf("%d ", r[i]);
    }
    printf("\n");

    return 0;
}