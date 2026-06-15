#include <cstdio>
#include <cstring>

void KonwertujNaMale(char *wskaznik) {
    while (*wskaznik != '\0') {
        if (*wskaznik >= 'A' && *wskaznik <= 'Z') {
            *wskaznik = *wskaznik + 32;
        }
        wskaznik++;
    }
}

void KonwertujNaDuze(char *wskaznik) {
    while (*wskaznik != '\0') {
        if (*wskaznik >= 'a' && *wskaznik <= 'z') {
            *wskaznik = *wskaznik - 32;
        }
        wskaznik++;
    }
}

int ObliczDlugosc(char *wskaznik) {
    int licznik = 0;
    while (*(wskaznik + licznik)) {
        licznik++;
    }
    return licznik;
}

void DrukowaniePomocy(char *nazwaAplikacji) {
    printf("Niepoprawne parametry! Uzyj formatu: %s \"twoj_tekst\"\n", nazwaAplikacji);
}

int main(int argc, char* argv[]) {
    char tekstUzytkownika[100];

    if (argc != 2) {
        DrukowaniePomocy(argv[0]);
        return 1;
    }

    strcpy(tekstUzytkownika, argv[1]);

    printf("tekst poczatkowy: %s\n", tekstUzytkownika);

    KonwertujNaMale(tekstUzytkownika);
    printf("wersja z malymi: %s\n", tekstUzytkownika);

    KonwertujNaDuze(tekstUzytkownika);
    printf("wersja z DUZYMI: %s\n", tekstUzytkownika);

    printf("rozmiar wprowadzonego tekstu wynosi: %d\n", ObliczDlugosc(tekstUzytkownika));

    return 0;
}