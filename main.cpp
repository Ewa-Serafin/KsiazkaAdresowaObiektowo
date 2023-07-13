#include "KsiazkaAdresowa.h"

int main() {

    char wybor;

    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt", "Adresaci.txt");

    while (true) {
        if (!ksiazkaAdresowa.czyUzytkownikJestZalogowany()) {

            wybor = ksiazkaAdresowa.wybierzOpcjeZMenuGlownego();

            switch (wybor) {
            case '1':
                ksiazkaAdresowa.rejestracjaUzytkownika();
                break;
            case '2':
                ksiazkaAdresowa.logowanieUzytkownika();
                break;
            case '9':
                exit(0);
                break;
            default:
                cout << endl << "Nie ma takiej opcji w menu." << endl << endl;
                system("pause");
                break;

            }

        } else {

            wybor = ksiazkaAdresowa.wybierzOpcjeZMenuUzytkownika();

            switch (wybor) {
            case '1':
                ksiazkaAdresowa.dodajAdresata();
                break;
            case '2':
                ksiazkaAdresowa.wyswietlWszystkichAdresatow();
                break;
            case '3':
                ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika();
                break;
            case '4':
                ksiazkaAdresowa.wylogujUzytkownika();
                break;
            }

        }
    }

    return 0;
}

