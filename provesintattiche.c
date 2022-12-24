#include <stdio.h>

typedef struct Esame
{
    char nome[20];
    int voto;
} Esami;

// in questo momento il tipo di dato _struct Esame_ non è inizializzato ma solo definito?

/* Per dichiararlo posso dentro qualche funzione o prima di ogni altra funzione con uno scope globale
scrivere: "struct Esame esami[20];" oppure "Esami esami[20];" ? */

int main(void) {

    struct Frutto
    {
        char nome[20];
        int peso;
    } frutto[20];   // Ho creato un array con 20 variabili dal nome _frutto_ del tipo di dato _struct Frutto_?

    struct Frutto frutti[20];   // La semantica è la stessa della istruzione precedente?

// ----------------------------------------------------------------

    typedef struct Personaggi
    {
        char nome[20];
        int peso;
    } Persone;

    Persone personaggi[20]; /* Ho creato 20 'occorrenze' indirizzati da un puntatore
    const (che quindi non può cambiare la variabile alla quale punta) del tipo di dato _struct Personaggi_? il nome
    corretto del tipo di dato è proprio _struct Personaggi_? */

    struct Personaggi persone[20];  // La semantica è la stessa della istruzione precedente?

// -----------------

    // il typedef può essere usato in qualunque parte del codice (dentro la funzione main e/o fuori)?

// -----------------

    int array[5] = {1,2,3,4,5}; // dichiarazione e corretta inizializzazione di un array

    int array_due[5];   // l'unico modo di inserire elementi dentro questo array è quello di effettuare un'operazione iterativa?
    
}
