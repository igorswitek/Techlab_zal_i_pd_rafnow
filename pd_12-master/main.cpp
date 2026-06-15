#include <stdio.h>
#include "Queue.h"

void menu(void)
{
    printf("\n");
    printf("1 - wstaw liczbe do kolejki\n");
    printf("2 - odczytaj wartosc z poczatku kolejki\n");
    printf("3 - usun liczbe z kolejki\n");
    printf("4 - sprawdz czy kolejka jest pusta\n");
    printf("5 - sprawdz czy kolejka jest pelna\n");
    printf("6 - koniec programu\n");
    printf("\n");
}

int main() {
    int temp = 0;
    int option = 0;
    printf("KOLEJKA\n");
    while (1)
    {
        menu();
        if (scanf("%d", &option) != 1) {
            while (getchar() != '\n');
            continue;
        }

        switch (option)
        {
            case 1:
                if (!isQueueFull()){
                    printf("podaj wartosc: ");
                    scanf("%d", &temp);
                    wstaw(temp);
                }
                else {
                    printf("kolejka jest pelna!\n");
                }
                break;

            case 2:
                if (!isQueueEmpty()) {
                    temp = pierwszy();
                    printf("odczytana wartosc: %d\n", temp);
                }
                else {
                    printf("kolejka jest pusta!\n");
                }
                break;

            case 3:
                if (!isQueueEmpty()) {
                    temp = usun();
                    printf("usunieta wartosc: %d\n", temp);
                }
                else {
                    printf("kolejka jest pusta!\n");
                }
                break;

            case 4:
                if (isQueueEmpty()) {
                    printf("kolejka jest pusta\n");
                }
                else {
                    printf("kolejka nie jest pusta\n");
                }
                break;

            case 5:
                if (isQueueFull()) {
                    printf("kolejka jest pelna\n");
                }
                else {
                    printf("kolejka nie jest pelna\n");
                }
                break;

            case 6:
                return 0;

            default:
                printf("wybierz wlasciwa opcje.\n");
                break;
        }
    }
    return 0;
}