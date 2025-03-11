// Created on 11 March 2025 by Elena M Galdi

#include <stdio.h>

int main(){
    int a=375, b=48; //modificare questi assegnamenti per fare prove diverse
    int r, magg, min;


    if(a>b){
        magg=a;
        min=b;
    }
    else{
        magg=b;
        min=a;
    }

    while(min!=0){
            r=magg%min;
            magg=min;
            min=r;
        }
    
    printf("mcd(%d,%d)=%d\n",a,b,magg);
    
    return 0;

}