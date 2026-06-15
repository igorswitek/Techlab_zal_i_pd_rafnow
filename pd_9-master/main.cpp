#include <iostream>
#include <cstdio>
#include <cstring>

void PomocKalkulatora(char *nazwaPliku) {
    printf("prawidlowe wywolanie: %s [wartosc1] [typ_operacji] [wartosc2]\n", nazwaPliku);
    printf("dostepne opcje: add, sub, mul, div, mod\n");
}

int main(int argc, char* argv[]) {
    int a = 0;
    int b = 0;
    int wynik = 0;

    if (argc == 4) {
        a = atoi(argv[1]);
        b = atoi(argv[3]);

        if (strcmp("add", argv[2]) == 0) {
            wynik = a + b;
            printf("wynik dodawania: %d\n", wynik);
        }
        else if (strcmp("sub", argv[2]) == 0) {
            wynik = a - b;
            printf("wynik odejmowania: %d\n", wynik);
        }
        else if (strcmp("mul", argv[2]) == 0) {
            wynik = a * b;
            printf("wynik mnozenia: %d\n", wynik);
        }
        else if (strcmp("div", argv[2]) == 0) {
            if (b != 0) {
                wynik = a / b;
                printf("wynik dzielenia: %d\n", wynik);
            } else {
                printf("nie mozna dzielic przez zero!\n");
            }
        }
        else if (strcmp("mod", argv[2]) == 0) {
            if (b != 0) {
                wynik = a % b;
                printf("reszta z dzielenia: %d\n", wynik);
            } else {
                printf("blad: operacja modulo przez zero!\n");
            }
        }
        else {
            PomocKalkulatora(argv[0]);
        }
    } else {
        PomocKalkulatora(argv[0]);
    }

    return 0;
}