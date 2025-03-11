// Created on 11 March 2025 by Elena M Galdi

#include <stdio.h>

int main() {
    int m = 7;


    switch (m) {
        case 1:
        case 2:
        case 12:
            printf("Inverno\n");
            break;
        case 3:
        case 4:
        case 5:
            printf("Primavera\n");
            break;
        case 6:
        case 7:
        case 8:
            printf("Estate\n");
            break;
        case 9:
        case 10:
        case 11:
            printf("Autunno\n");
            break;
        default:
            printf("Numero non valido\n");
    }

    return 0;
}