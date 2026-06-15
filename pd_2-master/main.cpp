#include <cstdio>

int obliczSume(int *x, int *y) {
    return *x + *y;
}

int obliczRoznice(int *x, int *y) {
    return *x - *y;
}

int obliczIloczyn(int *x, int *y) {
    return *x * *y;
}

int obliczIloraz(int *x, int *y) {
    if (*y == 0) {
        printf(">>> UWAGA: Wykryto probe dzielenia przez zero!\n");
        return 0;
    }
    return *x / *y;
}


int main() {
    int wartoscA, wartoscB;

    while (true) {
        printf("KALKULATOR\n");

        printf("Podaj wartosc A: ");
        if (scanf("%d", &wartoscA) != 1) break;

        printf("Podaj wartosc B: ");
        if (scanf("%d", &wartoscB) != 1) break;

        int rezSuma    = obliczSume(&wartoscA, &wartoscB);
        int rezRoznica = obliczRoznice(&wartoscA, &wartoscB);
        int rezIloczyn = obliczIloczyn(&wartoscA, &wartoscB);
        int rezIloraz  = obliczIloraz(&wartoscA, &wartoscB);

        printf("\nWYNIKI:\n");
        printf("[+] Dodawanie:   %d\n", rezSuma);
        printf("[-] Odejmowanie: %d\n", rezRoznica);
        printf("[*] Mnozenie:    %d\n", rezIloczyn);
        printf("[/] Dzielenie:   %d\n", rezIloraz);
    }

    return 0;
}