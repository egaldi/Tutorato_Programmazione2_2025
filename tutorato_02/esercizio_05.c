// Created on 11 March 2025 by Elena M Galdi

#include <stdio.h>

int main(){
    int r=3, c=2;   //modificare questi assegnamenti per fare prove diverse

    if(r>8 || r<0 || c>8 || c<0)
        printf("Le coordinate inserite non corrispondono a punti sulla scacchiera\n");
    else{
        //condizione affinchè la casella sia bianca: riga e colonna devono essere entrambi pari o entrambi dispari
        if((r%2==0 && c%2==0)||(r%2!=0 && c%2!=0))
            printf("Casella bianca\n");
        else
            printf("Casella nera\n");
    }

    return 0;
}