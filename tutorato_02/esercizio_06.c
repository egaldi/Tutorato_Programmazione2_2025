// Created on 11 March 2025 by Elena M Galdi

#include <stdio.h>

int main(){

    int n=1234321; //modificare questo assegnamento per fare prove diverse
    int reversed, digit, num;

    num =n;
    reversed = 0;

    while(num>0){
        digit = num %10;
        reversed = reversed * 10 +digit;
        num= num/10;
    }

    if(n==reversed)
        printf("%d è palindromo",n);
    else
        printf("%d non è palindromo",n);
    return 0;

}