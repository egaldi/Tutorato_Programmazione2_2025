// created by Elena M Galdi on 13 May 2025


/*
Quali delle seguenti affermazioni sui puntatori a funzione in C sono vere?

A. Un puntatore a funzione può essere passato come parametro a un’altra funzione.
B. Un puntatore a funzione può essere assegnato a una variabile.
C. I puntatori a funzione devono essere inizializzati a NULL prima di essere usati.
D. I puntatori a funzione non possono essere contenuti in array.
E. Un puntatore a funzione può essere dereferenziato ed eseguito come una funzione.

*/

/*SOLUZIONI

A. Vero – È alla base delle funzioni di ordine superiore.

B. Vero – È possibile fare ad esempio int (*f)(int) = quadrato;

C. Falso – Non è obbligatorio inizializzare a NULL, anche se può essere una buona pratica se non si assegna subito una funzione.

D. Falso – È perfettamente legale avere array di puntatori a funzione.

E. Vero – (*f)(x) oppure f(x) sono entrambi validi

*/