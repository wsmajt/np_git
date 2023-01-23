#include <iostream>
#include <string>

using namespace std;

string xorSzyfrowanie(string tekst, string klucz) {
    for (int i = 0; i < tekst.length(); i++) {

        tekst[i] = tekst[i] ^ klucz[i % klucz.length()];
    }
    return tekst;
}

void xorek(){
    setlocale(LC_ALL, "PL");

    string input;
    cout << "Podaj tekst do zakodowania: ";
    cin >> input;

    cout << "Podaj klucz szyfrujący: ";
    string klucz;
    cin >> klucz;

    cout << "Zakodowany tekst: " << xorSzyfrowanie(input, klucz) << endl;
}

int main() {

    xorek();
    return 0;
}
