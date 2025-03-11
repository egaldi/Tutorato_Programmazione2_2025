// Created on 11 March 2025 by Elena M Galdi

#include <stdio.h>

int main(){
    int x1=1, y1=1, x2=2, y2=2, x3=3, y3=3; //modificare questi assegnamenti per fare prove diverse


    // casi di vittoria
    // rispettivamente Diagonale AltoSx-BassoDx || Fila Orizzontale || Fila Verticale || Digonale AltoDX - BassoSx
    if((x1==y1 && x2==y2 && x3==y3)||(x1==x2 && x2==x3)||(y1==y2 && y2==y3)||(x1+y1==4 && x2+y2==4 && x3+y3==4)) 
        printf("VITTORIA!\n");

    else
        printf("Nessuna vittoria");

    return 0;

}