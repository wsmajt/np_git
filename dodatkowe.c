#include <stdio.h>
#define MAX 100
#include <ctype.h>
int zlicz_wystapienia(char* tekst, int* litery, int *cyfry) {
    int dl=0;
    int dl2=0;
    for (int i = 0; tekst[i] != '\0'; i++) {
        if (isalpha(tekst[i])&&islower(tekst[i])){
            litery[i] = tekst[i];
            dl++;
        }
        if (isdigit(tekst[i])){
            cyfry[i] = tekst[i];
            dl2++;
        }
    }
    printf("%d\n", dl);
    printf("%d\n", dl2);
    return litery,cyfry,dl,dl2;
}
int znajduje_sie_w(char znak, char *lancuch) {
    int ilosc=10;
    for (int i = 0; lancuch[i] != '\0'; i++) {
        if (lancuch[i] == znak) {
            ilosc++;
        }
    }
    printf("Znak ten znajduje sie w tekscie %d razy", ilosc);
    return ilosc;
}
int main(){
    char tekst[MAX];
    puts("Wpisz tekst");
    fgets(tekst, sizeof(tekst), stdin);
    int litery[MAX];
    int cyfry[MAX];
    zlicz_wystapienia( tekst,  litery, cyfry);
    char znak;
    printf("Wprowadz znak do sprawdzenia: ");
    scanf(" %c", &znak);
    znajduje_sie_w(znak, tekst);
    return 0;
}



