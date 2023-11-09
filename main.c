#include <stdio.h>

/*
Welche Speicherbereiche gibt es in einem C-Programm?
Wozu dienen die einzelnen Speicherbereiche?
    Programmcode - enthält Code des Programms
    statische Daten - initialisiertes Datensegment und nicht initialisiertes Datensegment,
                      enthält jeweils explizit initialisierte oder nicht initialisierte, mit null
                      initialisierte global deklarierte Variablen
    Stack - Funktionen und lokale Variablen
    Heap - während der Laufzeit dynamisch Speicher allokieren und zugreifen

Mit welchem Befehl kann man Speicher allokieren?
    int *str = (int *)malloc(sizeof(int));

Welcher Befehl initialisiert bzw. löscht den allokierten Speicher?
    malloc

Wie kann man einen Speicherbereich vergrößern oder verkleinern?
    realloc
    str = (char *) realloc(str, 6 * sizeof(char));

Mit welchem Befehl kann Speicher wieder freigegeben werden?
    free();

Was passiert, wenn man Speicher nicht freigibt?
    programm wird dick und ungesund

Was passiert, wenn man auf freigegebenen Speicher zugreift?
    Speicherinhalt könnte noch erhalten sein

*/


/*
 * int a=4, b=6, *c=&a, *d=&b;
 *
 * a = *c * *d;
 * > a = 24
 *
 * *d -= 3;
 * > b = 3
 *
 * b = a + b;
 * > b = 27
 *
 * c = d;
 * > ?????
 *
 * b = 7 + *d;
 * > b = 34
 *
 * a = *c - *d;
 * > a = -10
 *
 */


int main() {
    return 0;
}
