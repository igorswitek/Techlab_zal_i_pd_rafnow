#include <iostream>
#include <cstdio>

// void copy_text(char * text, char * destination) {
//     while (*text) {
//         *destination = *text;
//         destination++;
//         text++;
//     }
// }


void ModyfikujNaMale(char *wsk) {
    while (*wsk) {
        if ('A' <= *wsk && *wsk <= 'Z') {
            *wsk += ('a' - 'A');
        }
        wsk++;
    }
}

void ModyfikujNaDuze(char *wsk) {
    while (*wsk) {
        if ('a' <= *wsk && *wsk <= 'z') {
            *wsk += ('A' - 'a');
        }
        wsk++;
    }
}

int ZliczZnaki(char *wsk) {
    int dlugosc = 0;
    while (*wsk) {
        dlugosc++;
        wsk++;
    }
    return dlugosc;
}

int main() {
    char bufor[80];

    while (true) {
        printf("Podaj tekst: ");
        fgets(bufor, 80, stdin);

        if (bufor[0] == '\n') {
            break;
        }

        printf("%s\n", bufor);

        ModyfikujNaMale(bufor);
        printf("%s\n", bufor);

        ModyfikujNaDuze(bufor);
        printf("%s\n", bufor);

        printf("text size=%d\n", ZliczZnaki(bufor));
    }

    printf("Program zakonczony.\n");
    return 0;
}