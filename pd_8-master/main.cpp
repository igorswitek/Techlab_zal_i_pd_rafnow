#include <cstdio>
#include <cstdlib>
#include <cstring>

void PokazPomoc(char *programName) {
    printf("Blad parametrow! Poprawne wywolanie: %s [skladnik1] [dzialanie] [skladnik2]\n", programName);
    printf("Obslugiwane dzialania:\n");
    printf("\tsuma\n");
}

int main(int argc, char* argv[]) {
    int liczba1 = 0;
    int liczba2 = 0;
    int wynikDodawania = 0;

    if (argc == 4) {
        liczba1 = atoi(argv[1]);
        liczba2 = atoi(argv[3]);

        if (strcmp("suma", argv[2]) == 0) {
            wynikDodawania = liczba1 + liczba2;
            printf("Rezultat operacji: %d + %d = %d\n", liczba1, liczba2, wynikDodawania);
        } else {
            PokazPomoc(argv[0]);
        }
    } else {
        PokazPomoc(argv[0]);
    }

    return 0;
}