//Created on 2 April 2025 by Elena M Galdi
/*Realizzare una funzione per la conversione di una stringa che rappresenta una lista di numeri interi separati
davirgola in un array di interi. La funzione deve rispettare il seguente prototipo:
int stringsplit(long **values, const char *s);
La funzione si aspetta che la variabile s punti a una stringa C che rappresenta una lista di numeri interi (sia
positivi, sia negativi) separati da virgola (ovvero, il carattere ‘,’). La funzione deve convertire la stringa in
unarray di variabili long, che restituisce tramite la variabile values. La funzione deve gestire l’allocazione
dellamemoria necessaria per memorizzare l’array in maniera opportuna. Ad esempio, per una stringa con
valore "5,7,-10", la funzione restituirà in modo opportuno l’array {5,7,-10}. La funzione deve gestire i casi
di esecuzione anomala nelle seguenti modalità:
• se la stringa è vuota, la funzione imposta in modo opportuno il valore di values al puntatore speciale
NULLe restituisce come valore di ritorno 0;
• se la funzione riscontra degli errori di conversione restituisce valore -1. Ad esempio, stringhe con valori
non numerici, valori mancanti, ecc.;
• se la funzione riscontra degli errori di esecuzione (e.g., allocazione memoria) restituisce valore -2. */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <errno.h>

int stringsplit(long **values, const char *s) {
    if (s == NULL || *s == '\0') {
        *values = NULL;
        return 0; // Empty string
    }

    // Count the number of commas to determine the number of integers
    int count = 1;
    for (const char *p = s; *p != '\0'; ++p) {
        if (*p == ',') {
            count++;
        }
    }

    // Allocate memory for the array of long integers
    *values = (long *)malloc(count * sizeof(long));
    if (*values == NULL) {
        return -2; // Memory allocation error
    }

    int index = 0;
    const char *start = s;
    while (*start != '\0') {
        char *end;
        errno = 0;

        long num = strtol(start, &end, 10);

        if (errno != 0 || (end == start) || (*end != ',' && *end != '\0')) {
            free(*values);
            *values = NULL;
            return -1; // Conversion error
        }

        (*values)[index++] = num;

        if (*end == '\0') {
            break;
        }
        start = end + 1; // Move past the comma
    }

    return count; // Return the number of integers
}

// Example usage
int main() {

    char input[100]; //= "587,72145,-10";
    long *array = NULL;

    fgets(input, sizeof(input), stdin);
    // Remove newline character if present
    size_t len = strlen(input);
    if (len > 0 && input[len - 1] == '\n') {
        input[len - 1] = '\0';
    }
    int result = stringsplit(&array, input);

    if (result > 0) {
        printf("Array: ");
        for (int i = 0; i < result; i++) {
            printf("%ld ", array[i]);
        }
        printf("\n");
        free(array);
    } else if (result == 0) {
        printf("Empty string.\n");
    } else if (result == -1) {
        printf("Conversion error.\n");
    } else if (result == -2) {
        printf("Memory allocation error.\n");
    }

    
    return 0;
}
