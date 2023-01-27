#include <stdio.h>
#include <string.h>
#define MAX 100

void skracaj(char *lancuch, int rozmiar);

int main() {

  char slowo[MAX];
  int rozmiar;

  // Wypisanie przez użytkownika łańcucha słów
  puts("Podaj łancuch słów");
  fgets(slowo, sizeof(slowo), stdin);

  // Usunięcie znaku nowej linii z końca łańcucha
  slowo[strlen(slowo) - 1] = '\0';

  // Pobieranie rozmiaru, do jakiego ma być skrócony łańcuch
  puts("Podaj rozmiar, do jakiego ma być skrócony łańcuch");
  scanf("%d", &rozmiar);

  skracaj(slowo, rozmiar);

  fputs(slowo, stdout);
  return 0;
}

void skracaj(char *slowo, int rozmiar) {
  // Sprawdzenie, czy łańcuch jest dłuższy niż podany rozmiar
  if (strlen(slowo) > rozmiar) {
    // Skrócenie łańcucha do podanego rozmiaru
    slowo[rozmiar] = '\0';
  }
}