


#include <iostream>
using namespace std;
void incrementaConPuntatore(int *ptr) {
    (*ptr)++;
}

void incrementaConRiferimento(int &ref) {
    ref++;
}

void cambiaPuntatore(int **ptr,int n) {
    int *nuovoPuntatore = new int(n);
    *ptr = nuovoPuntatore;
}


void cambiaRiferimento(int *&ref, int n) {
    ref = new int(n);
}

int main() {
    int valore = 5;

    //confronto tra puntatore e riferimento 
    // similarità tra i due: 
    incrementaConPuntatore(&valore);
    std::cout << "Dopo incrementaConPuntatore: " << valore << std::endl; // Output: 6

    incrementaConRiferimento(valore);
    std::cout << "Dopo incrementaConRiferimento: " << valore << std::endl; // Output: 7

    int *puntatore;

    cambiaPuntatore(&puntatore,10);
    std::cout << "Dopo cambiaPuntatore: " << *puntatore << std::endl; // Output: 10
    

    cambiaRiferimento(puntatore,20);
    std::cout << "Dopo cambiaRiferimento: " << *puntatore << std::endl; // Output: 20

    //Differenza tra i 2:

    //Un riferimento non si può riallocare

    int &riferimento = valore;
    int valore_2 = 10;

    riferimento = valore_2; // Cambia il valore a cui riferimento punta ma non il riferimento di per sé
    std::cout << "Dopo cambiamento del valore a cui punta il riferimento: " << valore << std::endl; // Output: 10

    //Un puntatore può essere riallocato
    int *puntatore_2 = &valore;
    int valore_3 = 20;
    puntatore_2 = &valore_3; // Cambia il puntatore a cui punta puntatore_2
    std::cout << "Dopo cambiamento del puntatore: " << *puntatore_2 << std::endl; // Output: 20



    //Un puntatore può essere nullo
    //Un riferimento non può essere nullo

    // int &riferimento_2 = nullptr; // Errore: non puoi avere un riferimento nullo
    // int *puntatore_3 = nullptr; // OK: puoi avere un puntatore nullo
    //Un puntatore può essere deallocato
    //Un riferimento non può essere deallocato
    //int *puntatore_4 = new int(5);
    //delete puntatore_4; // OK: puoi deallocare la memoria di un puntatore
    //int &riferimento_5 = new int(5); // Errore: non puoi deallocare un riferimento
    //Un puntatore può essere passato per valore o per riferimento
    
    delete puntatore; // Dealloca la memoria allocata dinamicamente
    puntatore = nullptr; // Imposta il puntatore a nullptr per evitare dangling pointer
    // Se non deallochi la memoria, potresti avere una perdita di memoria
    // e il puntatore potrebbe puntare a un'area di memoria non valida.
    // Se non imposti il puntatore a nullptr, potresti avere un dangling pointer
    // che punta a un'area di memoria non valida.
    // In questo caso, non è necessario deallocare la memoria, poiché il puntatore
    // non è più utilizzato e non punta a nulla.
    // Tuttavia, è una buona pratica deallocare la memoria allocata dinamicamente
    // per evitare perdite di memoria.

    return 0;
}
