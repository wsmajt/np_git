#include <stdio.h>
#include <string.h>
#define MAX 100

void sklej(char *a, char *b) {
    int i, j;
    for (i = 0; a[i] != '\0' && a[i] != '\n'; ++i)
        ;
    for (j = 0; b[j] != '\0' && b[j] != '\n'; ++j, ++i) {
        a[i] = b[j];
    }
    a[i] = '\0';
    fputs(a, stdout);
}
int main(void) {

    char zdanieA[MAX] = "Abram";
    char zdanieB[MAX] = "Gold";

    puts("--- Funkcja Sklej ---");
    sklej(zdanieA, zdanieB);
    printf("\n");

    puts("--- Funkcja Strcat ---");
    strcpy(zdanieA, "Abram");
    strcat(zdanieA, zdanieB);
    printf("%s\n", zdanieA);

    return 0;
}