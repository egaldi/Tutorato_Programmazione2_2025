// Created on 13 May 2025 by Elena M Galdi

/* 

Scrivere una funzione chiamata applica_operazione che prende in ingresso due numeri interi e un puntatore a funzione che rappresenta un'operazione aritmetica tra di essi. La funzione dovrà restituire il risultato dell’operazione.
Poi, implementare alcune operazioni (somma, sottrazione, moltiplicazione, divisione) come funzioni normali.
Infine, scrivere una funzione main() che usa applica_operazione per eseguire varie operazioni passando diversi puntatori a funzione. */

#include <stdio.h>

// Funzioni per le operazioni
int somma(int a, int b) { return a + b; }
int sottrai(int a, int b) { return a - b; }
int moltiplica(int a, int b) { return a * b; }
int dividi(int a, int b) { return b != 0 ? a / b : 0; } // semplice controllo

// Funzione di ordine superiore
int applica_operazione(int a, int b, int (*operazione)(int, int)) {
    return operazione(a, b);
}

int main() {
    int x = 10, y = 5;

    printf("Somma: %d\n", applica_operazione(x, y, somma));
    printf("Sottrazione: %d\n", applica_operazione(x, y, sottrai));
    printf("Moltiplicazione: %d\n", applica_operazione(x, y, moltiplica));
    printf("Divisione: %d\n", applica_operazione(x, y, dividi));

    return 0;
}
