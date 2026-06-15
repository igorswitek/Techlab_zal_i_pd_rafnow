#include <cstdio>
#define ro_tab 10

void wypiszElementy(int *wskaznik, int ilosc) {
    printf("\nTABLICA\n");
    for (int idx = 0; idx < ilosc; idx++) {
        printf(" Element [%d] = %d\n", idx, *(wskaznik + idx));
    }
}

int szukajMaksimum(int *t, int ilosc) {
    int maks = *t;
    for (int i = 1; i < ilosc; i++) {
        if (*(t + i) > maks) {
            maks = *(t + i);
        }
    }
    return maks;
}

int szukajMinimum(int *t, int ilosc) {
    int min = *t;
    for (int i = 1; i < ilosc; i++) {
        if (*(t + i) < min) {
            min = *(t + i);
        }
    }
    return min;
}

int sumujWartosci(int *t, int ilosc) {
    int sumaCalkowita = 0;
    for (int i = 0; i < ilosc; i++) {
        sumaCalkowita += *(t + i);
    }
    return sumaCalkowita;
}

float policzSrednia(int *t, int ilosc) {
    return (float)sumujWartosci(t, ilosc) / ilosc;
}

void sortowanieBabelkowe(int *dane, int ilosc) {
    for (int i = 0; i < ilosc - 1; i++) {
        for (int j = 0; j < ilosc - i - 1; j++) {
            if (dane[j] > dane[j + 1]) {
                int temp = dane[j];
                dane[j] = dane[j + 1];
                dane[j + 1] = temp;
            }
        }
    }
}

void przepiszTablice(int zrodlo[], int cel[], int ilosc) {
    for (int i = 0; i < ilosc; i++) {
        cel[i] = zrodlo[i];
    }
}

double obliczMediane(int *liczby, int ilosc) {
    int kopia[ilosc];
    przepiszTablice(liczby, kopia, ilosc);
    sortowanieBabelkowe(kopia, ilosc);

    double wartoscMediany;
    if (ilosc % 2 != 0) {
        wartoscMediany = (double)kopia[ilosc / 2];
    } else {
        wartoscMediany = (kopia[ilosc / 2 - 1] + kopia[ilosc / 2]) / 2.0;
    }

    printf("Obliczona mediana:  %.2f\n", wartoscMediany);
    return wartoscMediany;
}

int main() {

    int mojeLiczby[ro_tab] = {15, 22, 5, 100, -12, 0, 33, 8, 19, 45};

    wypiszElementy(mojeLiczby, ro_tab);

    printf("\nSTATYSTYKI\n");
    printf("Najwieksza wartosc: %d\n", szukajMaksimum(mojeLiczby, ro_tab));
    printf("Najmniejsza wartosc: %d\n", szukajMinimum(mojeLiczby, ro_tab));
    printf("Suma elementow:     %d\n", sumujWartosci(mojeLiczby, ro_tab));
    printf("Srednia wartosc:    %.2f\n", policzSrednia(mojeLiczby, ro_tab));

    obliczMediane(mojeLiczby, ro_tab);

    return 0;
}