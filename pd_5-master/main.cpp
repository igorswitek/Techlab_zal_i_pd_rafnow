#include <iostream>
#include <cstdio>

void KlonujTekst(char *zrodlo, char *cel) {
    while (*zrodlo) {
        *cel = *zrodlo;
        cel++;
        zrodlo++;
    }
    *cel = '\0';
}

void NaMaleLitery(char *wsk) {
    while (*wsk) {
        if ('A' <= *wsk && *wsk <= 'Z') {
            *wsk += ('a' - 'A');
        }
        wsk++;
    }
}
void NaWielkieLitery(char *wsk) {
    while (*wsk) {
        if ('a' <= *wsk && *wsk <= 'z') {
            *wsk += ('A' - 'a');
        }
        wsk++;
    }
}
int DlugoscTekstu(char *wsk) {
    int licznik = 0;
    while (*wsk) {
        licznik++;
        wsk++;
    }
    return licznik;
}

int main() {
    char napis[] = "Ala nie ma kota";
    printf("%s\n", napis);
    NaMaleLitery(napis);
    printf("%s\n", napis);
    NaWielkieLitery(napis);
    printf("%s\n", napis);
    printf("text size=%d\n", DlugoscTekstu(napis));

    return 0;
}