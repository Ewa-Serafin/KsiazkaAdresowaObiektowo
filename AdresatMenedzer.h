#ifndef ADRESATMENEDZER_H
#define ADRESATMENEDZER_H

#include <iostream>
#include <vector>
#include <windows.h>
#include<fstream>
#include<sstream>

#include "PlikZAdresatami.h"
#include "Adresat.h"
#include "MetodyPomocnicze.h"

using namespace std;

class AdresatMenedzer {

    int idZalogowanegoUzytkownika;
    vector<Adresat> adresaci;

    PlikZAdresatami plikZAdresatami;

    Adresat podajDaneNowegoAdresata();

public:
    AdresatMenedzer(string nazwaPlikuZAdresatami) : plikZAdresatami(nazwaPlikuZAdresatami) {
    idZalogowanegoUzytkownika = 0;
    }

    void setIdZalogowanegoUzytkownika(int idZalogowanegoUzytkownika);

    void dodajAdresata();
    void wyswietlWszystkichAdresatow();
    void wyswietlDaneAdresata(Adresat adresat);
    void pobierzAdresatowZalogowanegoUzytkownika();
};

#endif
