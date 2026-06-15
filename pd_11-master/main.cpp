#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int dolna_granica, gorna_granica, ilosc;

    int *liczby = NULL;

    srand(time(NULL));

    printf("(podanie ilosci rownej 0 konczy program i zwalnia pamiec)\n");

    while (1) {
        printf("podaj ilosc wartosci pseudolosowych (0 aby zakonczyw): \n");
        if (scanf("%d", &ilosc) != 1) {
            printf("blad odczytu!\n");
            while (getchar() != '\n');
            continue;
        }

        if (ilosc == 0) {
            printf("zamykanie\n");
            break;
        }

        if (ilosc < 0) {
            printf("blad: ilosc liczb musi byc wieksza od zera!\n");
            continue;
        }

        printf("podaj dolna granice zakresu: \n");
        scanf("%d", &dolna_granica);

        printf("podaj gorna granice zakresu: \n");
        scanf("%d", &gorna_granica);

        if (dolna_granica > gorna_granica) {
            printf("blad: dolna granica nie moze byc wieksza od gornej!\n");
            continue;
        }


        int *temp_ptr = (int *) realloc(liczby, ilosc * sizeof(int));

        if (temp_ptr == NULL) {
            printf("blad: brak mozliwosci przydzielenia pamieci przez realloc!\n");
            free(liczby);
            return 1;
        }

        liczby = temp_ptr;

        printf("wygenerowane liczby: \n");
        for (int i = 0; i < ilosc; i++) {
            liczby[i] = rand() % (gorna_granica - dolna_granica + 1) + dolna_granica;
            printf("%d ", liczby[i]);
        }
    }

    free(liczby);
    liczby = NULL;

    return 0;
}