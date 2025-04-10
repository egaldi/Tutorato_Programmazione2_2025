//Created on 2 April 2025 by Elena M Galdi
/*Un ladro è riuscito ad intrufolarsi all’interno di un caveau di una banca. Tuttavia si è dimenticato di prendere con se uno zaino quindi non riesce a portare via tutte le pietre preziose che ha trovato ma può portarne via solamente k (quelle che riesce a tenere in mano). Tra tutte le pietre presenti sceglierà le k più preziose.
Scrivere un programma che legga da tastiera tutte le k ≤ n ≤ 20, pietre contenute nel caveau con relativo nome e valore.
Salvare poi questi due campi in una struttura pietra composta da un campo int valore e un campo char nome[DIM] con DIM = 20.
Inserire ciascuna struttura in un array di strutture e ordinarlo sul campo valore in maniera crescente. Selezionare poi le prime k pietre e stamparle.
Sviluppare la soluzione utilizzando il numero di funzioni che si ritiene adeguato.*/

#include <stdio.h>
#define DIM 20

typedef struct {
    int valore;
    char nome[DIM];
}pietra;

void ordina(pietra a[],int n){
    int i,min,j;
    pietra p;

    for(i=0;i<n;i++){
        min=i;
        for(j=i+1;j<n;j++){ //cerco il minimo nell'array rimanente
            if(a[min].valore>a[j].valore){
                min=j;
            }
        }
        //swap
        p=a[i];
        a[i]=a[min];
        a[min]=a[i];
    }
}

int main(){
    pietra arrayPietre[DIM];
    int k, n;

    scanf("%d", &n);
    scanf("%d", &k);

    for(int i=0; i<n;i++){
        printf("Nome\n");
        scanf("%s", arrayPietre[i].nome);

        printf("Valore\n");
        scanf("%d", &arrayPietre[i].valore);
    }

    ordina(arrayPietre,n);

}