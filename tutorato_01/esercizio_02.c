// Created on 5 March 2025 by Elena M Galdi

#include <stdio.h>


int main(){
    unsigned int decimal=123;
    unsigned int octal = 0123;
    unsigned int hexadecimal = 0x1A;
    int sum= decimal+octal+hexadecimal;

    printf(" Decimale = %i\n Ottale= %o\n Esadecimale=%x\n",decimal,octal,hexadecimal);
    printf("La somma dei tre numeri è = %d\n", sum);

    return 0;
}