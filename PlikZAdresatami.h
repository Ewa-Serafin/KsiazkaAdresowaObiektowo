#ifndef PLIKZADRESATAMI_H
#define PLIKZADRESATAMI_H

#include <iostream>
#include <vector>

using namespace std;

#include "PlikTekstowy.h"
#include "Adresat.h"
#include "MetodyPomocnicze.h"

class PlikZAdresatami : public PlikTekstowy {

    int idOstatniegoAdresata;
    string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat adresat);

    int pobierzIdUzytkownikaZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    Adresat pobierzDaneAdresata(string daneAdresataOddzielonePionowymiKreskami);
    void usunPlik(string nazwaPlikuZRozszerzeniem);
    void zmienNazwePliku(string staraNazwa, string nowaNazwa);

public:

    PlikZAdresatami(string nazwaPliku) : PlikTekstowy(nazwaPliku) {
        idOstatniegoAdresata = 0;
    };
    int pobierzIdOstatniegoAdresata();
    bool dopiszAdresataDoPliku(Adresat adresat);
    vector <Adresat> wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);

    void usunWybranaLinieWPliku(int numerUsuwanejLinii);




};

#endif
