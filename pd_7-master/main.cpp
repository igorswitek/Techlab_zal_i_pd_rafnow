#include <iostream>
#include <cstdio>

// void copy_text(char * text, char * destination) {
//     while (*text) {
//         *destination = *text;
//         destination++;
//         text++;
//     }
// }


void PrzeksztalcNaMale(char *wsk) {
    while (*wsk) {
        if ('A' <= *wsk && *wsk <= 'Z') {
            *wsk += ('a' - 'A');
        }
        wsk++;
    }
}

void PrzeksztalcNaDuze(char *wsk) {
    while (*wsk) {
        if ('a' <= *wsk && *wsk <= 'z') {
            *wsk += ('A' - 'a');
        }
        wsk++;
    }
}

int ZmierzDlugosc(char *wsk) {
    int licznik = 0;
    while (*wsk) {
        licznik++;
        wsk++;
    }
    return licznik;
}
// char lower(char *str) {
//    char c[size_text(str)];
//     copy_text(str,c);
//     while (c) {
//         if ('A' <= c && c <= 'Z') {
//             c += ('a' - 'A');
//         }
//     }return c;
// }

void UsunZnakEnter(char *wsk) {
    wsk[ZmierzDlugosc(wsk) - 1] = 0;
}

int main() {
    char tekst[80];

    while (true) {
        printf("Podaj tekst: ");
        fgets(tekst, 80, stdin);

        if (tekst[0] == '\n') {
            break;
        }

        UsunZnakEnter(tekst);

        printf("%s\n", tekst);

        PrzeksztalcNaMale(tekst);
        printf("%s\n", tekst);

        PrzeksztalcNaDuze(tekst);
        printf("%s\n", tekst);

        printf("text size=%d\n", ZmierzDlugosc(tekst));
    }

    printf("Do widzenia!\n");
    return 0;
}