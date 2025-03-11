// Created on 11 March 2025 by Elena M Galdi

#include <stdio.h>

int main(){

    int rows=10; //modificare questo assegnamento per fare prove diverse
    int i, j, space;



    for(i=rows; i>= 1; i--){
        for(space=0; space < rows-i; ++space)
            printf("  ");
        for(j=0; j<= 2*(i-1); ++j)
            printf("* ");
        printf("\n");
    }

    return 0;

}