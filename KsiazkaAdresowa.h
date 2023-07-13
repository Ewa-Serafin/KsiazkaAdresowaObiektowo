#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H

#include <iostream>

#include "UzytkownikMenedzer.h"
#include "AdresatMenedzer.h"
#include "MetodyPomocnicze.h"
#include "WyswietlMenu.h"

using namespace std;

class KsiazkaAdresowa {

    UzytkownikMenedzer uzytkownikMenedzer;
    AdresatMenedzer adresatMenedzer;
    WyswietlMenu wyswietlMenu;
    string NAZWAPLIKUZADRESATAMI;


public:
    KsiazkaAdresowa(string nazwaPlikuZUzytkownikami, string nazwaPlikuZAdresatami) : uzytkownikMenedzer(nazwaPlikuZUzytkownikami),
        adresatMenedzer(nazwaPlikuZAdresatami, uzytkownikMenedzer.pobierzIdZalogowanegoUzytkownika())
        , wyswietlMenu(), NAZWAPLIKUZADRESATAMI(nazwaPlikuZAdresatami) {};

    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
    void logowanieUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika();

    void wylogujUzytkownika();


    void wylogowanieUzytkownika();
    void dodajAdresata();
    void wyswietlWszystkichAdresatow();

    bool czyUzytkownikJestZalogowany();

    char wybierzOpcjeZMenuGlownego();
    char wybierzOpcjeZMenuUzytkownika();


};

#endif
