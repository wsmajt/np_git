#include <stdio.h>
#include <stdbool.h> // biblioteka ta pozwoli nam z funkcji znajduje_sie_w zwrócić wartość fałszywą, bądź prawdziwą
#define MAX 100

int znajduje_sie_w(char znak, char *lancuch);

int main() {
    char slowo[MAX];
    int dlugosc = 0;

    puts("Podaj łancuch słów");
    fgets(slowo, sizeof(slowo), stdin);

    for (int i = 0; slowo[i] != '\0'; i++) {
        dlugosc++;
    }
    for (int i = 0; i < dlugosc; i++) {
        char znak;
        printf("Wprowadź znak do sprawdzenia: ");
        scanf(" %c", &znak);
        if (znajduje_sie_w(znak, slowo)) {
            printf("Znak znajduje się w łańcuchu.\n");
        } else {
            printf("Znak nie znajduje się w łańcuchu.\n");
        }
    }
}

int znajduje_sie_w(char znak, char *lancuch) {
    for (int i = 0; lancuch[i] != '\0'; i++) {
        if (lancuch[i] == znak) {
            return true;
        }
    }
    return false;
}