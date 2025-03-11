// Created on 11 March 2025 by Elena M Galdi

#include <stdio.h>

int main(){
    int a=2,b=100; //modificare questi assegnamenti per fare prove diverse
    int i,n, nCicli;


    for(i=a;i<=b;i++){
        n=i;
        nCicli=0;

        while(n!=1){
            if(n%2==0)
                n=n/2;
            else
                n=3*n+1;
            nCicli++;
        }
        printf("Numero %d\n Numero Cicli %d\n\n",i, nCicli);
    }

    return 0;
}