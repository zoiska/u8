#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/*
Welche Speicherbereiche gibt es in einem C-Programm?
Wozu dienen die einzelnen Speicherbereiche?
    Programmcode - enthält Code des Programms
    statische Daten - initialisiertes Datensegment und nicht initialisiertes Datensegment,
                      enthält jeweils explizit initialisierte oder nicht initialisierte, mit null
                      initialisierte global deklarierte Variablen
    Stack - Funktionen und lokale Variablen, current scope
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

void aufg3(){
    int a = 10;
    int b = 100;
    int c = -73456543;
    int *pA = &a;
    int *pB = &b;
    int *pC = &c;
    int *pD;
    printf("%d %d %d\n", *pA, *pB, *pC);
    //printf("%d %d %d %d", *pA, *pB, *pC, *pD);
    printf("%p %p %p\n", *pA, *pB, *pC);
}

void aufg4(){
    int arr[100];
    int *ptr = arr;
    int sum;
    for(int i = 0; i < 100; i++){
        *(ptr + 1) = *ptr + 2;
        sum += *(ptr + 1);
    }
    printf("Summe aller Elemente ist %d\n", sum);
}

void aufg5(){
    long *yee = (long *) malloc(100 * sizeof(long));
    for(int i = 1; i < 100; i++){
        yee[i] = yee[i - 1] + 2;
        printf("%ld ", yee[i]);
    }
    yee = (long *)realloc(yee, 200 * sizeof(long));
    free(yee);
}

void aufg6(){
    char *str = (char *)malloc(101 * sizeof(char));
    int blank = 0, alpha = 0, digit = 0;
    fgets(str, 100, stdin);
    for(int i = 0; i < strlen(str); i++){
        if(isblank(str[i])){
            blank++;
        }
        if(isalpha(str[i])){
            alpha++;
        }
        if(isdigit(str[i])){
            digit++;
        }
        printf("%c ", str[i]);
    }
    printf("\nAnzahl Leerzeichen: %d\nAnzahl Buchstaben: %d\nAnzahl Ziffern: %d", blank, alpha, digit);
}

int main() {
    //aufg3();
    //aufg4();
    //aufg5();
    //aufg6();
    return 0;
}