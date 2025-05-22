#ifndef TIPO_STRUCT_H
#define TIPO_STRUCT_H

typedef struct studente 
{
    char nome[20];
    char cognome[20];
    int matricola;
} studente;

typedef studente* tipo_inf;

int compare(tipo_inf,tipo_inf);
void copy(tipo_inf&,tipo_inf);
void print(tipo_inf);
#endif // TIPO_STRUCT_H