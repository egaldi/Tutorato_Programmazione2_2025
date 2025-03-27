//Created on 24 March 2025 by Elena M Galdi
#include <stdio.h>

// Implementare una funzione per il calcolo della serie di Fibonacci, in cui si calcolano i primi N valori e li si
// salvano in un array. La funzione rispetti la seguente interfaccia:
// void fibonacci(unsigned *r, unsigned n);
// dove:
// • r è il puntatore all’array generato
// • n è il numero di valori della serie da generate

// Serie di Fibonacci: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ...
// è una successione di numeri interi in cui ciascun numero è la somma dei due precedenti, eccetto i primi due che sono, per definizione, 0 e 1.


void fibonacci(unsigned *r, unsigned n) {
    if (n == 0) return;
    if (n >= 1) r[0] = 0;
    if (n >= 2) r[1] = 1;
    for (unsigned i = 2; i < n; i++) {
        r[i] = r[i - 1] + r[i - 2];
    }
}

int main() {
    unsigned n = 10;
    unsigned r[n];
    fibonacci(r, n);
    for (unsigned i = 0; i < n; i++) {
        printf("%u ", r[i]);
    }
    printf("\n");
    return 0;
}