// Created on 24 March 2025 by Elena M Galdi

#include <stdio.h>
// Implementare una funzione findi che individua la posizione di un valore all’interno di un array di interi. La
// funzione rispetti il seguente prototipo:
// long fini(int t, const int *values, unsigned size);


long findi(int t, const int *values, unsigned size) {
    for (unsigned i = 0; i < size; i++) {
        if (values[i] == t) {
            return i;
        }
    }
    return -1; // Return -1 if the value is not found
}

int main() {
    int values[] = {1, 2, 3, 4, 5};
    unsigned size = sizeof(values) / sizeof(values[0]);
    int t = 3;
    
    long index = findi(t, values, size);
    if (index != -1) {
        printf("Value %d found at index %ld\n", t, index);
    } else {
        printf("Value %d not found\n", t);
    }

    return 0;
}