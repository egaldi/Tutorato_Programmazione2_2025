// Created on 11 March 2025 by Elena M Galdi

#include <stdio.h>

int main(){
    int a=10, b=20; //modificare questi assegnamenti per fare prove diverse

    if(b!=0 && a%b == 0)
        printf("%d è divisibile per %d\n",a,b);
    else if(a!= 0 && b%a == 0)
            printf("%d è divisibile per %d\n",b,a);
    else
        printf("I due numeri non sono divisibili\n");
    
    if(a%2==0)
        printf("%d è pari\n",a);
    else
        printf("%d è dispari\n",a);

    if(b%2==0)
        printf("%d è pari\n",b);
    else
        printf("%d è dispari\n",b);


    return 0;
}