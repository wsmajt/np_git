#include <iostream>
#include <string>

using namespace std;

string szyfrCezaraKodowanie(string tekst, int klucz) {
    string zaszyfrowanyTekst = "";
    for (char c : tekst) {
        if (isalpha(c)) {
            int ascii = (int)c;
            ascii += klucz;

            //Wielkość liter oraz zachowanie granic.
            if (isupper(c)) {
                if (ascii > 90) ascii -= 26;
                else if (ascii < 65) ascii += 26;
            } else {
                if (ascii > 122) ascii -= 26;
                else if (ascii < 97) ascii += 26;
            }

            zaszyfrowanyTekst += (char)ascii;

        } else {
            zaszyfrowanyTekst += c;
        }
    }
    return zaszyfrowanyTekst;
}

string szyfrCezaraDekodowanie(string tekst, int klucz) {
    string rozszyfrowanyTekst = "";
    for (char c : tekst) {
        if (isalpha(c)) {
            int ascii = (int)c;
            ascii -= klucz;

            //Wielkość liter oraz zachowanie granic.
            if (isupper(c)) {
                if (ascii > 90) ascii -= 26;
                else if (ascii < 65) ascii += 26;
            } else {
                if (ascii > 122) ascii -= 26;
                else if (ascii < 97) ascii += 26;
            }

            rozszyfrowanyTekst += (char)ascii;

        } else {
            rozszyfrowanyTekst += c;
        }
    }
    return rozszyfrowanyTekst;
}

void cezar(){
    string tekst;
    int klucz;

    cout << "Podaj tekst do zakodowania: ";
    cin>>tekst;
    cout << "Podaj klucz: ";
    cin >> klucz;

    string zaszyfrowanyTekst = szyfrCezaraKodowanie(tekst, klucz);
    cout << "Zaszyfrowany tekst: " << zaszyfrowanyTekst << endl;

    string rozszyfrowanyTekst = szyfrCezaraDekodowanie(zaszyfrowanyTekst, klucz);
    cout << "Rozszyfrowany tekst: " << rozszyfrowanyTekst << endl;
}

string xorSzyfrowanie(string tekst, string klucz) {
    for (int i = 0; i < tekst.length(); i++) {

        tekst[i] = tekst[i] ^ klucz[i % klucz.length()];
    }
    return tekst;
}


int main() {
    
    return 0;
}
